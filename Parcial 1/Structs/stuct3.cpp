#include <stdio.h>
#define TAM 4

struct alumno
{
    char nombre[40];
    int edad;
    float promedio;
};

alumno varibaleGlobal;

void imprimir(alumno auxilar);
alumno llenar();

int main(){
    alumno al[TAM];

    for(int i=0;i<TAM;i++){
        al[i]=llenar();
    }
    //int var=imprimir(al1); esto esta mal!!!
    for(int i=0;i<TAM;i++){
        imprimir(al[i]);
    }

    return 0;
}

void imprimir(alumno auxiliar){
    //auxiliar es variable local
    printf("\n Nombre: %s",auxiliar.nombre);
    printf("\n Edad: %s",auxiliar.edad);
    printf("\n Promedio: %s",auxiliar.promedio);
    //varibaleGlobal.edad=33;
}

alumno llenar(){
    alumno aux;//variable local
    printf("\nDame el nombre: ");
    gets(aux.nombre);
    printf("\nDame la edad: ");
    scanf("%d",&aux.edad);
    printf("\nDame el promedio: ");
    scanf("%f",&aux.promedio);
    return aux; //manda aux y destruye aux
}