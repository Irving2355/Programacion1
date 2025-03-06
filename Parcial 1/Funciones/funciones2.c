#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h> // libreria para booleanos

#define TAM 10

int x;

void llenar(int vec[]);
void imprimir(int vec[]);
bool verificar();

void main(){
    int vec2[TAM],vec3[TAM];
    bool check;
    x=10;
    check=verificar(); //check=true
    printf("%d", check);

    llenar(vec2);
    llenar(vec3);

    imprimir(vec3);
    printf("\n\n");
    imprimir(vec2);



    printf("\n");
    system("pause");
    //return 0;
}

void llenar(int vec[]){
    printf("entro a llenar");
    for(int  i=0;i<TAM; i++){
        printf("Dame un valor: ");
        scanf("%d", &vec[i]);
    }
}

void imprimir(int vec[]){
    for(int  i=0;i<TAM; i++){
        printf("%d  ",vec[i]);
    }
}

bool verificar(){
    if(x%2 == 0){
        return true;
    }else{
        return false;
    }
}