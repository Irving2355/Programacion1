#include <stdio.h>
#include <stdlib.h>

int vec[10]={1,2,3,4,5,6,7,8,9,10};
void imprimir();

int main(void){
    imprimir();
    printf("\n");
    system("pause");
    return 0;
}

void imprimir(){
    int tam =sizeof(vec)/sizeof(vec[0]);//vec[0]= 4= int
    for(int i=0; i<tam; i++){
        printf("%d",vec[i]);
    }
}