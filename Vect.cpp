#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>  
using namespace std;
int main(){
// Desarrollar un programa que determine si una matriz es simetrica o no. Una matriz es simetrica si es cuadrada y si es igual a una matriz transpuesta.

| 8 1 3|        | 5 7 8 |   
| 1 7 4 | - - > | 4 2 3 |
|  4 5 6|       | 7 7 9 |
int  main [100][100], filas, columnas, numeros;
char band = 'F';
cout<<"Digite el numero de filas:\n";
cin>>filas;
cout<<"Digite el numero de columnas\n";
cin>>columnas;
for(int i=0; i<filas; i++){
    for(int j=0; j<columnas; j++){
        cout<<"Digite un numero ["<<i<<"]["<<j<<"]:\n";
        cin>>numeros[i][j];
    }
}
if(filas==columnas){
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            if(numeros[i][j] == numeros[j][i]){
                band = 'V';
            }
        }
    }
}
if(band == 'V'){
cout<<"La matriz es simetrica\n";
} else {
cout<<"La matriz no es simetrica\n";
}
    
system("pause");
getch();
    return 0;
}