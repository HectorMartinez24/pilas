#include <iostream>
#include <stdlib.h>     // Librer�a para usar la funci�n srand()
#include <time.h>       // Librer�a para usar la funci�n time()

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
    //Declaraci�n de variables
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
