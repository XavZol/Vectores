#include<iostream>
#include<conio.h>  
using namespace std;
int main(){
// Hacer un programa que lea 5 numeros en un arreglo, le copie a otro arreglo multiplicado por dos y muestre el segundo arreglo.
int numeros[5], numeros2[5];
for(int i=0; i<5; i++){
    cout<<"Digite los elementos del arreglo:\n";
    cin>>numeros[i];
}
// Multiplicar por los 2 numeros n del areglo
for(int i=0; i<5; i++){
    numeros2[i] = numeros[i] * 2;
}
// Mostrar el segundo arreglo
cout<<"El segundo arreglo es:\n";
for (int i=0; i<5; i++){
    cout<<numeros2[i]<<"\n";
}
getch();
    return 0;
}