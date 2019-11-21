#include <bits/stdc++.h>
using namespace std;
struct NODO{ 
  int data; 
  NODO* left,* rigth; 
};
NODO* raiz=NULL,*aux=NULL; 

int main() {
    raiz=new NODO(); 
    raiz->data=24; 
    raiz->left=new NODO();                    
    raiz->rigth=new NODO(); 

    
    aux=raiz->left; 
    aux->data=14; 
    aux->left=new NODO(); 
    aux->rigth=new NODO(); 

    aux=aux->left; 
    aux->data=4; 
    aux->left=NULL; 
    aux->rigth=NULL; 

    aux=raiz->left; 
    aux=aux->rigth; 
    aux->data=2; 
    aux->left=NULL; 
    aux->rigth=NULL; 

    aux=raiz->rigth; 
    aux->data=18; 
    aux->left=NULL; 
    aux->rigth=new NODO();
    
    aux=aux->rigth; 
    aux->data=17; 
    aux->left=new NODO(); 
    aux->rigth=NULL; 

    aux=aux->left;  
    aux->data=27; 
    aux->left=NULL; 
    aux->rigth=NULL; 

    
    cout<<raiz->data<<endl;
    cout<<raiz->left->data<<" "<<raiz->rigth->data<<endl;
    cout<<raiz->left->left->data<<" "<<raiz->left->rigth->data<<" "<<raiz->rigth->rigth->data<<endl;
    cout<<raiz->rigth->rigth->left->data<<endl;

    

    aux=raiz->left; 
    raiz->left=NULL; 
    delete aux; 

    aux=raiz->rigth; 
    aux=aux->rigth; 
    aux=aux->left;
    delete aux; 
    aux=raiz->rigth->rigth; 
    aux->left=NULL; 
    
    cout<<endl<<"Despues de eliminar:"<<endl;
    cout<<raiz->data<<endl;
    cout<<raiz->rigth->data<<endl;
    cout<<raiz->rigth->rigth->data<<endl;

    return 0;
}

