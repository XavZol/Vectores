#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>  
using namespace std;
int main(){
// Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.

int numeros[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int numeros2[3][3] = {{9,8,7},{6,5,4},{3,2,1}};

for(int i=0; I<3; i++){
    for(int j=0; j<3; j++){
        cout<<numeros[i][j]<<" ";
    }
    cout<<"\n";
}

for(int i=0; I<3; i++){
    for(int j=0; j<3; j++){
        cout<<numeros2[i][j]<<" ";
    }
    cout<<"\n";
}
cout<<"Suma de las dos matrices:\n";
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout<<numeros[i][j] + numeros2[i][j]<<" ";
    }
    cout<<"\n";
}
system("pause");
getch();
    return 0;
}