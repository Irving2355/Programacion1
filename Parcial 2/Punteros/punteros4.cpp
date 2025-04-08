/*
Se teiene 2 tipos de paso de parametros:
paso de parametros por valor 
paso de parametros por referencia
*/
#include <iostream> 

void intento1(int a, int b);
void intento2(int *a,int *b);

using namespace std;

int main(){
    int a=9,b=18;

    //paso de parametros por valor
    intento1(a,b);
    cout << "\n a: "<< a << " b: " << b <<endl;
    intento2(&a,&b);
    cout << "\n a: "<< a << " b: " << b <<endl;
    return 0;
}

void intento1(int a, int b){
    int aux;
    aux = a;
    a=b;
    b=aux;
}

void intento2(int *a, int *b){
    int aux;
    aux = *a;
    *a=*b;
    *b=aux;
}