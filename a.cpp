#include <iostream>
using namespace std;



int swap(int &numuno, int &numdos){
    int temp;
    if (numuno == numdos)
    {
         cout << "Los numeros son iguales";
    }
    if (numuno > numdos)
    {
        temp = numuno;
        numuno = numdos;
        numdos = temp;
        cout << to_string(numuno) + "," + to_string(numdos);    
    }
    else
    {
        temp = numdos;
        numdos = numuno;
        numuno = temp;
        cout << to_string(numuno) + "," + to_string(numdos);    
    }

}
int main() {
    
    int numuno; //variables
    int numdos;//variables
    cout << "Ingrese el primer numero: ";// pide el num
    cin >> numuno; //lo guarda
    cout << "Ingrese el segundo numero: ";// pide el num
    cin >> numdos;//lo guarda
    swap(numuno, numdos);//llama a la funcion y carga los valores de arriba
}
