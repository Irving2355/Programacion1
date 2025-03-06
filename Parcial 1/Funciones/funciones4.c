#include <stdio.h>
#include <string.h>

// int main(int argc,char *argv[]) {
//     printf("Numero de argumentos: %d\n",argc);
//     for(int i=0;i<argc; i++){
//         printf("Numero de argumento %d: %s\n",i,argv[i]);
//     }
//     return 0;
// }

// int main(int argc,char *argv[]){
//     int suma=0;
//     for(int i=1; i<argc; i++){
//         suma += atoi(argv[i]); //convertir a entero
//     }

//     printf("\nSuma: %d\n",suma);
//     return 0;
// }

//progrma.exe nombre1  5 5 5 5 5 agrv[1]=nombre agrv[2...] numeros
//nombre1 : promedio de los 5 numeros

int main(int argc,char *argv[]){
    int suma=0;
    printf("nombre: %s\n", argv[1]);
    printf("numero1: %s\n", argv[2]);
    // for(int i=1; i<argc; i++){
    //     suma += atoi(argv[i]); //convertir a entero
    // }

    //printf("\nSuma: %d\n",suma);
    return 0;
}