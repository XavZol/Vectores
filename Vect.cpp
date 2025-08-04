#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
// Cadenas de caracteres
char palabra[] = "Panfilo";
char palabra2[]= {'P', 'a', 'n', 'f', 'i', 'l', 'o', '\0'};
char nombre[30];

cout<<"Digite su nombre:\n";
cin.getline(nombre, 30, "\n");
// en su caso usar "gets(nombre);" para mas caracteres de los debidos. 

cout<<nombre<<endl;

getch();
return 0;
}