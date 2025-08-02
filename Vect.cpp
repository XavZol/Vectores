#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>  
using namespace std;
int main(){
// Hacer una matriz pidiendole al usuario de numero de filas y columnas, llenar de numeros aleatorios, copiar el contenido a otra matriz y por ultima mostrarla en pantalla.
int numeros[100][100], dato, filas, columnas;
int numeros2[100][100];
cout<<"Digite el numero de filas:\n";
cin>>filas;
cout<<"Digite el numero de columnas:\n";
cin>>columnas;

srand(time(NULL)); //generar numeros aleatorios

for(int i=0; i<filas; i++){
    for(int j=0; j<columnas; j++){
        dato = i+rand()%(100); // generando numeros aleatorios (1-100)
    numero[i][j] = dato;
    }
}
// Copiando el contenido a otra matriz 
for(int i=0; i<filas; i++){
    for(int j=0; j<columnas; i++){
        numeros2[i][j] = numeros[i][j];
    }
}
// Imprimiendo matriz numero 2 en pantalla
for(int i=0; i<filas; i++){
    for(int j=0; j<columnas; i++){
        cout<<numeros2[i][j]<<" ";
    }
    cout<<"\n";
}
system("pause");
getch();
    return 0;
}