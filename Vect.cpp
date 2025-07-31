#include<iostream>
#include "Vect.h"
#include<conio.h>  
using namespace std;
int main(){
//Desarrolle un programa que lea de la entrada estandar un vector de enteros y determine el mayor elemento del vector.
int numero[100], n, mayor;
cout<<"Digite el numero de elementos del arreglo:\n";
cin>>n;
for(int i=0; i<n; i++){
    cout<<i+1<<"Digite un numero:\n";
    cin>>numero[i];
    // 1 2 3 5 10
    if(numero[i] >mayor){
        mayor = numero[i];    }
}
cout<<"El mayor numero del arreglo es: "<<mayor<<endl;
getch();
    return 0;
}