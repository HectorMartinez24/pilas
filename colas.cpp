#include <iostream>
#include <stdlib.h>     // Librería para usar la función srand()
#include <time.h>       // Librería para usar la función time()

using namespace std;

//Declaraciones de tipos para manejar colas en C++
typedef struct _nodo {
   int dato;
   struct _nodo *siguiente;
} tipoNodo;

typedef tipoNodo *pNodo;
typedef tipoNodo *Cola;

int main()
{
    //Declaración de variables
    int i, Numero;
    srand(time(NULL));

    //Procesamiento
    for(i = 1; i <= 100; i++)
    {
        Numero = 1 + rand() % (3 - 1);
        cout << Numero << endl;
    }

    return 0;
}
