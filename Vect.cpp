#include<iostream>
#include<stdlib.h>  
using namespace std;
int main(){
// Hacer una matriz de tipo entero de 2+2, Llenarla de numeros y luego copiar todo su contenido hacia otra matriz.
int numeros[2][2] = {{1,2},{3,4}};
int matriz[2][2]; 

for (int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        matriz[i][j]=numeros[i][j];
    }
}
// Mostrando matriz 
for (int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        cout<<matriz[i][j];
    }
    cout<<" "\n;
}
system("pause");

    return 0;
}