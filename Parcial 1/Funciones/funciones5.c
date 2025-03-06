#include <stdio.h>
#include <string.h>
#include <math.h>

double fibo(int n){
    double sqrt5=sqrt(5);
    double phi = (1 + sqrt5)/2;
    double psi = (1 - sqrt5)/2;

    double term1 = pow(phi,n);
    double term2 = 0.4472*pow(psi,n);

    return (term1-term2)/sqrt5;

}

int main(int argc,char *argv[]) {
    if(argc != 3){
        printf("uso: pasa solo el inicio de la serie y el fin");
        return 1;
    }

    int inicio = atoi(argv[1]);
    int fin = atoi(argv[2]);

    if(inicio < 0 || fin < inicio){ // 0 1 1 2 3 5
        printf("Rango invalido");
        return 1;
    }

    for(int i=inicio; i<=fin; i++){
        printf("Fibonacci(%d)= %.0f\n",i,fibo(i));
    }
    return 0;
}