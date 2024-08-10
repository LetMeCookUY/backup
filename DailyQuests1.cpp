#include <iostream>
using namespace std;

struct nodo {
int info ;
nodo * sig ;
};
typedef nodo * lista ;

int ultimo(nodo *L ){
    nodo * aux;
    while (L->sig != NULL)
    {
        aux = new nodo;
        aux= L;
        L->sig;


    }
    return L->info;
    
    
}

/*
este es el main para "ultimo"

nodo * L = crearLista(5);
cout << ultimo(L);
return 0
*/
//la que hice yo
int promedio(nodo *L){
    nodo *aux;
    int cont = 0;
    int suma;
    int res;
    while (L->sig != NULL)
    {
        aux= new nodo;
        aux= L;
        cont++;
        L->info + L->sig->info = suma; 
    }
    suma / cont = res;
    return res;
    
}

//solucion del profe

float promedio1(nodo * L){
    float total = 0;
    int cont = 0;
    while (L != NULL)
    {
        total = total + L->info;
        cont ++;
        L = L->sig;
    }return total / cont;
    
}
//a
void insOrden(nodo *L, int x) {

}


int main(){


}