#include<iostream>
#include "Vect.h"
#include<conio.h>  
using namespace std;
int main(){
// Escriba un programa que lea de la entrada estandar un vector de numeros y muestre en la salida entandar los numeros del vector con sus indices asociados.
int numeros[100]; n;
cout<<"Digite el numero de elementos del vector:\n";
cin>>n;
for (int i=0; i<n; i++){
    cout<<"Digite el elemento\n";
    cin>>numeros[i];
}
cout<<"Los numeros del vector con sus indices asociados son:\n";
for (int i=0; i<n; i++){
    cout<<"Indice: "<<i<<" Valor: "<<numeros[i]<<endl;
}
getch();
    return 0;
}