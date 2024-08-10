#include <iostream>
using namespace std;

struct nodo {
    int dato;
    nodo *sig;
    nodo *ant;
};

//hacer una lista ordenada utilizando punteros y la estructura nodo

void insertar(nodo *&lista, int n) {
    nodo *nuevo_nodo = new nodo();
    nuevo_nodo->dato = n;

    nodo *aux1 = lista;
    nodo *aux2;

    while ((aux1 != NULL) && (aux1->dato < n)) {
        aux2 = aux1;
        aux1 = aux1->sig;
    }

    if (lista == aux1) {
        lista = nuevo_nodo;
    } else {
        aux2->sig = nuevo_nodo;
    }

    nuevo_nodo->sig = aux1;
    nuevo_nodo->ant = aux2;

    if (aux1 != NULL) {
        aux1->ant = nuevo_nodo;
    }
}

int main() {
    
}