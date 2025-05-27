/*
El operador -> se usa para acceder a los 
atributos de una estructura atraves de un 
puntero es una forma abreviada de escribir
(*puntero).miembro

struct Ejemplo
{
    int dato1;
    int dato2;
};

Ejemplo prueba1;
Ejemplo *ptr = &prueba1;
prueba1.dato1 = 233;
Ambos son lo mismo
(*ptr).dato1 = 2024;
ptr->dato1 =2024;

*/

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

struct Libro
{
    char titulo[100];
    int anio;
};

//dedinimos otro stuct que tiene un puntero a otro struct
struct Biblioteca
{
    Libro* libros;
    int cantidad;
};

void crearBibloteca(struct Biblioteca* biblio, int cantidad){
    biblio->cantidad = cantidad;
    biblio->libros = (struct Libro*) malloc(cantidad * sizeof(struct Libro));
}
//*biblio
void asignarLibro(struct Biblioteca* biblio, int index, char* titulo, int anio){
    if(index >= 0 && index < biblio->cantidad){
        struct Libro *libro = &(biblio->libros[index]);
        strncpy(libro->titulo,titulo,100);
        libro->anio = anio;
    }
}

void mostrarLibros(struct Biblioteca *Biblio){
    for (int i=0; i<Biblio->cantidad; i++){
        struct Libro *libro = & Biblio->libros[i];
        cout << "Libro #" << i+1 << ": " << libro->titulo << " " << libro->anio << endl;
    }
}

void liberarBibloteca(struct Biblioteca*miBiblio){
    free(miBiblio->libros);
    miBiblio->libros = NULL;
    miBiblio->cantidad = 0;
}
int main(){
    Biblioteca miBiblio;
    crearBibloteca(&miBiblio, 2);

    asignarLibro(&miBiblio, 0 , "El principito", 1988);
    asignarLibro(&miBiblio, 1 , "Metodos Numericos", 2025);

    mostrarLibros(&miBiblio);

    liberarBibloteca(&miBiblio);
    return 0;
}