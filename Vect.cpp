#include<iostream>
#include "Vect.h"
#include<conio.h>  
using namespace std;
int main(){
 // Escribe un programa que define un vector de numeros y calcule la suma de sus elementos.
int numeros[]= {1,2,3,4,5};
int suma = 0;
for (int i =0; i<5; i++){
    suma += numeros[i];
}
cout<<"La suma de los elementos del vector es: " << suma << endl;
// Espera a que el usuario presione una tecla antes de cerrar la consola
getch();
    return 0;
}