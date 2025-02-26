#include <stdio.h>

//funcion recibe un vector y su tamaño retorna la suma

int sumar(int vec[],int tam){
    int suma=0;
    for(int i=0; i<tam; i++){
        suma = suma + vec[i];
    }
    return suma;
}

int main(){
    // 1 1 2 3 5 8 13 ....
    int vector[]={5,3,6,7,8,9};
    int tama = sizeof(vector)/sizeof(vector[0]);

    int suma = sumar(vector,tama);
    printf("%d",suma);

    printf("\n");
    system("pause");
    return 0;
}