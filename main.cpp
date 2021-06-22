#include <iostream>
using namespace std;
//Se desea calcular el factorial de un número entero.
//El factorial de 5 es 5 x 4 x 3 x 2 x 1
//El factorial de 6 es 6 x 5 x 4 x 3 x 2 x 1
//El factorial de 4 es 1 x 2 x 3 x 4

//1) Inicio
//2) leer n
//3) leer fact = 1
//4) Ingresar un numero
//5) n
//6) for(int i = 1; i<=n; i++)
//6.1) fact=fact*1
//7) Imprimir resultado
//8) Fin
int main(){
    int n;
    long fact = 1;
    cout<<"Introduzca un numero: ";
    cin>>n;

    for(int i = 1; i<=n; i++){
        fact=fact*i;
    }
     cout<<"El factorial de un numero es: "<<fact;

}
