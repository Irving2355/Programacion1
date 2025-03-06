#include <stdio.h>
#include <iostream> //cout cin

struct libros
{
    /* data */
    char autor[30];
    int ISBN; //ISBN = ID del libro 
    char titulo[30];
    char categoria;
    char editorial[30];
};

libros llenar();
void imprimir(libros aux);


using namespace std;

int main(){
    libros lib1[1];
    cout << "Hola";

    for(int i=0;i<1;i++){
        lib1[i]=llenar();
    }

    for(int i=0;i<1;i++){
        //printf("%d",vect[i]);
        imprimir(lib1[i]);
    }
    
}

libros llenar(){
    libros lib1;
    printf("Dame el autor: ");
    scanf("%s",lib1.autor);
    fflush(stdin);
    printf("Dame el ISBN: ");
    scanf("%d",&lib1.ISBN);
    printf("Dame el titulo: ");
    scanf("%s",&lib1.titulo);
    fflush(stdin);
    printf("Dame la categoria: ");
    scanf("%c",&lib1.categoria);
    fflush(stdin);
    printf("Dame la editorial: ");
    scanf("%s",&lib1.editorial);
    fflush(stdin);
    return lib1;
}

void imprimir(libros aux){
    printf("\nAutor: %s\n",aux.autor);
    std::cout << "\nAutor: " << aux.autor;
    printf("\nISBN: %d\n",aux.ISBN);
    printf("\nTitulo: %s\n",aux.titulo);
    printf("\nCategoria: %c\n",aux.categoria);
    printf("\nEditorial: %s\n",aux.editorial);
}
