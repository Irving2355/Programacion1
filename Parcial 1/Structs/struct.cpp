#include <stdio.h>

struct fecha
{
    int dia;
    int mes;
    int year;
};

struct alumno
{
    char nombre[40];
    int edad;
    float promedio;
    fecha fec;
};

int main(){
    alumno al;
    fecha al1;

    al1.dia=22;

    al.fec.dia=17;
    al.fec.mes=02;
    al.fec.year=25;
    //al.dia=22 esto esta mal!!!

    printf("\nDame el nombre: ");
    gets(al.nombre);
    printf("\nDame la edad: ");
    scanf("%d",&al.edad);
    printf("\nDame el promedio: ");
    scanf("%f",&al.promedio);

    printf("\n nombre: %s",al.nombre);
    printf("\n edad: %d",al.edad);
    printf("\n promedio: %f",al.promedio);
    return 0;
}