#include<iostream>
#include<fstream>
using namespace std;

void Mayusculas(char []);
void Renglones(char [],char []);

int main(){
    setlocale(LC_ALL,"spanish");
    Renglones("Texto1.txt","Texto2.txt");
}

void Mayusculas(char Renglon[]){
    int i=0;
    while(Renglon[i]){
        Renglon[i]= toupper(Renglon[i]);
        i++;
    }
}
void Renglones(char origen[],char destino[]){

    ifstream texto1;
    ofstream texto2;
    char renglon[256];
    texto1.open(origen);
    texto2.open(destino);

    if(texto1.good())
        while(!texto1.eof()){
            texto1.getline(renglon,256);
            Mayusculas(renglon);
            texto2 << renglon<<endl;
        }
    else
        cout<<"No se encuentra el archivo inicial para realizar la conversion"<<endl;

    texto1.close();
    texto2.close();
}
