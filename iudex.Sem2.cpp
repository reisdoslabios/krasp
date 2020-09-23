#include <iostream> 
#include <string>
#define hashGroups 997
using namespace std; 

typedef struct Node
{
    int64_t u;
    int64_t c;
    int s;
    Node* next;
    Node* tail;

}Node;

bool isStarted(Node Users){
    if(Users.next = NULL){
        return false;
    }
    else {
        return true;
    }
}

Node ListStart(Node Users){
    Node* novo = new Node();
    Users.next = novo;
    novo->next = NULL;
    return Users;
}

int hashFunction(int64_t key){
    return key % hashGroups;//return a number between  0 and 996  
}

void hashUsers(int keyU, int64_t idC, int v, int64_t idU, Node *Users){//insert one user on a chanel with some note
    auto cell = Users[keyU];
    Node* aux ;
    Node* nw = new Node();
    if(isStarted(cell)){

        Users[keyU] = ListStart(Users[keyU]);
        aux = Users[keyU].next;
        aux->next = nw;
        nw->s = v;
        nw->u = idU;
        nw->c = idC;
        nw->next = NULL;
        aux->tail= nw;
        cout << v << endl;

    }   
    else{

        aux = Users[keyU].next;
        aux = aux->tail;
        aux->next = nw;
        nw->next = NULL;
        cout << nw->s << endl;
        nw->s = v;
        nw->u = idU;
        nw->c = idC;
        nw->next = NULL;
        aux->tail= nw;
        
    }
    
    
}

void hashChanel(int keyU, int keyC, int v){


}

void hashScore(int keyU, int keyC, int v){


}

void CHN(){

}

void Usr(){

}

void Sco(){

}

void Rmu(){

}

int main(){
    string op; 
    int64_t U{};
    int64_t C{};
    int s{};
    Node *Users = new Node[hashGroups]; //array dynamic
    Node *Chanel = new Node[hashGroups];
    Node *Note = new Node[hashGroups];

    cin >> op;
    
    while(op != "END"){

        cin >> U >> C >> s;    

        if(op == "SUB"){

            int u = hashFunction(U);
            int c = hashFunction(C);
            hashUsers(u, C, s, U, Users);
            
        }

        else if (op == "CHN"){

        }
        
        else if(op == "USR"){
            	
        }
        
        else if(op == "SCO"){

        }
        
        else if(op == "RMU"){

        }
        cin >> op;
    }
    return 0;
}