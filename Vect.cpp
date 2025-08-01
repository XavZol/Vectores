#include<iostream>
#include<conio.h>  
using namespace std;
int main(){
// Escriba un programa que defina dos vectores de caracteres, despues almacene el contenido de ambos vectores en un nuevo vector, situando en el primer lugar 
// los elementos del segundo vector. muestre el contenidoo del nuevo vector en la salida estandar.
char letras[]={'a','b','c','d','e'};
char numero[]=['1','2','3','4','5'];
char nuevo[10];
// copiando los elemtnos de elmentos de letras a nuevo 
for(int i=0; i<5; i++){
    nuevo[i]  = letras[i];{
    }
    for (int i=0; i<10; i++){
        nuevo[i]= numero[i-5];
    }
    //mostrar el nuevo vector
    for(int i=0; i<10; i++){
        cout<<nuevo[i]<<" ";
    }
}

getch();
    return 0;
}