#include<iostream>
#include<conio.h>  
using namespace std;
int main(){
// Matrices 
// Hacer un programa para rellenar una matriz pidiendo al usuario el numero de filas y columnas; posteriormente mostrar la matriz en pantalla;
int main[100][100], filas, columnas;
cout<<"Digite el numero de filas: ";
cin>>filas;
cout<<"Digite el numero de columnas; ";
cin>>columnas;
//almacenando numeros en la matriz
for (int i=0; i<filas; i++){
    for (int j=0; j<columnas; j++){
        cout<<"Digite el valor de la posicion ["<<i<<"]"<<"["<<j<<"]";
        cin>>numero[i][j];
    }
}
for (int i=0; i<filas; i++){
    for (int j=0; j<columnas; j++){
        cout<<numeros[i][j]<<" ";
    }
}
getch();
    return 0;
}