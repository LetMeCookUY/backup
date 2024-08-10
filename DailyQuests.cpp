#include <iostream>
using namespace std;

//        inicializacion
// referencia a otra variable
// (NEW)
// (NULL/ NULLptr)
/*
punto * p = new punto;
(*p1).x = 1; // p1->x=1;
(*p1).y = 2; // p1->y=2;
*/

struct nodo{

    int dato;
    nodo *sig;

};

void imprimir (nodo * p){
    while (p!= NULL)
    {
        cout << p->dato;
        p= p->sig;
    }
    
}

/*

       nodo *p = new nodo;
    (*p).dato=3;
    p->dato=3;
    p->sig=NULL;
    nodo * q;
    q= new nodo;
    q->dato=2;
    q->sig=p;

    imprimir(p);
     
    imprimir(q);
*/

nodo * crearLista(int n){
    nodo * res = NULL;
    nodo * aux;
    while (n>0)
    {
        aux=new nodo;
        aux->dato= n;
        n--;
        aux->sig=res;
        res=aux;
    }
    return res;
}
/*

    nodo * p = crearLista(7);
    imprimir(p);
    return 0;
*/

nodo* crearLista1(int n){
    if (n<=0)
        return NULL;
    int cont = 1;
    nodo *res = new nodo;
    res->dato=cont++;
    nodo *aux = res;
    while (cont<=n)
    {
        aux->sig=new nodo;
        aux=aux->sig;
        aux->dato=cont++;
    }
    aux->sig = NULL;
    return res;
}
/*

    nodo * p = crearLista(7);
    imprimir(p);
    return 0;
*/

// practico listas 1



int main() {

    nodo * p = crearLista1(7);
    imprimir(p);
    return 0;
}
