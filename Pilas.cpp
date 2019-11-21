#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};
void imprimirpila(Nodo *&, int&);
void agregarpila(Nodo *&,int);
int main(){
	int num,dato;
	char si;
	Nodo *pila=NULL;
	do{
		cout<<"INGRESAR EL DATO : ";
		cin>>dato;
		agregarpila(pila,dato);
		cout<<"QUIERES AGREGAR OTRO DATO A LA PILA :"<<endl;
		cin>>si;
	}while(si=='s'||si=='S');
	cout<<"SE SACARON LOS ELEMENTOS "<<endl;
	while(pila != NULL){
		imprimirpila(pila,dato);
		cout<<dato<<endl;
	}
	getch();
	return 0;
}
void agregarpila(Nodo *&pila,int n)
{
	Nodo *nuevonodo=new Nodo();
	nuevonodo->dato=n;
	nuevonodo->siguiente=pila;
	pila=nuevonodo;
}
void imprimirpila(Nodo *&pila, int &n){
	Nodo *aux=pila;
	n=aux->dato;
	pila=aux->siguiente;
	delete aux;
}

