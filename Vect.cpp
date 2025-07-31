#include<iostream>
#include "Vect.h"
#include<conio.h>  
using namespace std;
int main(){
//Escribe un programa defina un vector de numeros y calcule si existe algun numero en el vectoor cuyo valor equivale a la suma del resto de numeros del vector.
int numero[5] = {1, 2, 3, 4, 10};
int suma = 0, mayor = 0;
for(int i=0; i<5; i++){
    suma += numero[i];

    if (numero [i] >mayor){
        mayor = numero[i];
    }
}   
if(mayor == suma-mayor){
    cout<<"El numero"<<mayor<<" equivale a suma de los demas";
}
else{
    cout<<"No existe ningun numero que sea igual a la suma de los demas"<<endl;
}
cout<<"La suma de los numeros es: " << suma << endl;
getch();
    return 0;
}