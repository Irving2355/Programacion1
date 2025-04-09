/*
Un vector en realidad es un puntero
*/
#include <iostream> 

void llenar1(int *);
void imprimir1(int *);
void llenar2(int *);
void imprimir2(int *);

using namespace std;

int main(){
    int v[5];
    llenar1(v);
    imprimir1(v);
    llenar2(v);
    imprimir2(v);
    cout << "\nRegresamos al main()\n";
    for(int i=0; i<5; i++){
        cout << v[i] << " ";
    }
    return 0;
}

void imprimir1(int *vec){
    cout << "\nFuncion de imprimir 1 usando corchetes\n";

    for(int i=0; i<5; i++){
        cout << vec[i] << " ";
    }
}

void imprimir2(int *vec){
    cout << "\nFuncion de imprimir 2 usando punteros\n";

    for(int i=0; i<5; i++){
        cout << *(vec+i) << " ";
    }
}

void llenar1(int *vec){
    cout << "\n\nFuncion de llenar usando corchetes\n";
    for(int i=0; i<5; i++){
        vec[i]=i;
    }
}

void llenar2(int *vec){
    cout << "\n\nFuncion de llenar usando punteros\n";
    for(int i=0; i<5; i++){
        *(vec+i)=i*2;
    }
}