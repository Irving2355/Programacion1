#include <stdio.h>
#include <iostream> //cout cin
#include <string>

using namespace std;

struct direccion
{
    string calle;
    int numero;
    string ciudad;
};

struct persona
{
    string nombre;
    int edad;
    direccion dire;
};

persona personaGlobal={"juan",19,{"Calle 1",299,"AGS"}};

void imprimir(persona aux);

int main(){
    persona p1,p2,p4;
    p1.nombre="juan";
    p1.edad=19;
    p1.dire.calle="Calle 1";
    p1.dire.ciudad="AGS";
    p1.dire.numero=233;

    p2={"juan",19,{"Calle 1",299,"AGS"}};
    persona p3{"juan",19,{"Calle 1",299,"AGS"}};
    p4={
        "juan",
        19,
        {
            "Calle 1",
            299,
            "AGS"
        }
    };

    persona p5;
    direccion dir={"Calle 2",23,"AGS"};
    p5={"Maria",19,dir};
    
    imprimir(p1);
    printf("\n\n");
    imprimir(p2);
    printf("\n\n");
    imprimir(p3);
    printf("\n\n");
    imprimir(p4);
    printf("\n\n");
    imprimir(p5);
    return 0;
    
}

void imprimir(persona aux){
    cout << "\nNombre:\n" << aux.nombre;
    cout << "\nedad:\n" << aux.edad;
    cout << "\nCalle:\n" << aux.dire.calle;
    cout << "\nNumero:\n" << aux.dire.numero;
    cout << "\nCiudad:\n" << aux.dire.ciudad;
}
