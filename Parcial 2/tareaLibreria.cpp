#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>

#define TAM 10

enum tipopublicacion{
    LIBROS=1,
    REVISTAS=2,
    PERIODICO=3
};

union informacion{
    struct datosrevista
    {
        int numero;
        int mes;
        int anio;
    }drev; 
    //drev sera una forma abreviada de llamar el 
    //struct a esto de le conoce como typeref
        
    struct datosperiodico
    {
        float precio;
        int totalejemplares;
    }dperiodico;

    struct datoslibro
    {
        int totalpaginas;
        char categoria[30];
    }dlibro;
};

struct publicaciones
{
    char nompub[30];
    tipopublicacion tipo; //campo del tipo del enum
    informacion inf; //campo del tipo de la union
};

void imprimir(publicaciones pub[TAM]);
void consulta(publicaciones pub[TAM]);

using namespace std;

int main(){
    srand(time(0));
    publicaciones pub[TAM];

    return 0;
}

void imprimir(publicaciones pub[TAM]){
    cout << endl << endl << "****Reporte de publicaciones****";
    for(int i=0; i<TAM; i++){
        cout << endl << endl << "Datos de la publicacion guardada en la posicion  "<< i << endl;
        switch(pub[i].tipo){
            case LIBROS:
            cout << endl << "LIBRO";
            cout << endl << "nombre: " << pub[i].nompub;
            cout << endl << "categoria: " << pub[i].inf.dlibro.categoria;
            cout << endl << "numero de paginas: " << pub[i].inf.dlibro.totalpaginas;
            break;
        case REVISTAS:
            cout << endl << "REVISTA";
            cout << endl << "nombre: " << pub[i].nompub;
            cout << endl << "numero: " << pub[i].inf.drev.numero;
            cout << endl << "mes: " << pub[i].inf.drev.mes;
            cout << endl << "anio: " << pub[i].inf.drev.anio;
            break;
        case PERIODICO:
            cout << endl << "PERIODICO";
            cout << endl << "nombre: " << pub[i].nompub;
            cout << endl << "precio: $" << pub[i].inf.dperiodico.precio;
            cout << endl << "total de ejemplares: " << pub[i].inf.dperiodico.totalejemplares;
            break;
        }//fin switch
    }//fin ciclo
}//fin funcion

void consulta(publicaciones pub[TAM]){
    int cont1,cont2,cont3;
    cont1=0; cont2=0; cont3=0;
    cout << endl << endl << "****Total de publicaciones****";
    for(int i=0; i<TAM; i++){
        switch (pub[i].tipo)
        {
        case LIBROS:
            cont1++;
            break;
        case REVISTAS:
            cont2++;
            break;
        case PERIODICO:
            cont3++;
            break;    
        }//fin switch
    }//fin ciclo
    cout << endl << endl <<"total de publicaciones: " << TAM;
    cout << endl << "Total de libros: " << cont1;
    cout << endl << "Total de revistas: " << cont2;
    cout << endl << "Total de periodicos: " << cont3;
}// fin funcion
