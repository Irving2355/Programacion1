/*
Se desea almacenar los datos de N animales
los cuales estan clasificados en domesticos,
salvajes y acuaticos

Se hara uso de struct enum y union
*/

#include <iostream>
#include <iomanip>
/*#include <iomanip> nos ayuda con herramientas 
para formatear la salida de texto y números, 
especialmente en lo que respecta a la alineación, 
precisión decimal y presentación de valores.*/
#include <cstring>

//             0          1          2
enum tipos {DOMESTICOS, SALVAJE, ACUATICOS};

union caract{
    int vidaPromedio;
    char regionHabita[30];
    char tipoAgua[15];
};

struct animal{
    char descripcion[30];
    tipos tp;
    caract ct;
};

const int TAM = 3;

void llenar(animal ani[TAM]);
void imprimir(animal ani[TAM]);
void consultarportipo(animal ani[TAM]);
void consultaagua(animal ani[TAM], char agua[15]);

using namespace std;

int main(){
    animal ani[TAM];
    char agua[15];
    
    llenar(ani);
    imprimir(ani);
    consultarportipo(ani);
    cout << endl << "Animal de cual tipo de agua deseas consultar: ";
    fflush(stdin);
    cin.getline(agua,15);
    consultaagua(ani,agua);
    return 0;
}

void consultaagua(animal ani[TAM], char agua[15]){
    int contador=0;
    for(int i=0; i<TAM; i++){
        if(ani[i].tp == ACUATICOS){
            if(strcmp(ani[i].ct.tipoAgua,agua) == 0){
                cout << endl << ani[i].descripcion;
                contador++;
            }
        }
    }
    if(contador == 0){
        cout << endl << "No hay animales registrados";
    }
}

int capturartipo(){
    int tipo;
    do{
        cout << endl << "Tipo de animal \n0 Domestico \n1 Salvaje \n2 Acuatico";
        cout << endl << "Cual deseas: ";
        cin >> tipo;
    }while (tipo != 0 && tipo!= 1 && tipo != 2);
    return tipo;
}

void llenar(animal ani[TAM]){
    int tipo;
    for(int i=0; i<TAM; i++){
        tipo = capturartipo();
        cout << endl << "Dame la descipcion: ";
        fflush(stdin); //limpia subuffer
        cin.getline(ani[i].descripcion,30);

        switch (tipo)
        {
        case DOMESTICOS: 
            ani[i].tp=DOMESTICOS;
            cout << endl << "Vida promedio: ";
            cin >> ani[i].ct.vidaPromedio;
            break;

        case SALVAJE: 
            ani[i].tp=SALVAJE;
            cout << endl << "Region que habita: ";
            cin.getline(ani[i].ct.regionHabita,30);
            break;

        case ACUATICOS: 
            ani[i].tp=ACUATICOS;
            cout << endl << "Tipo de agua: ";
            cin.getline(ani[i].ct.tipoAgua,30);
            break;        
        }// fin switch
    }//fin for
}//fin de la funcion

void imprimir(animal ani[TAM]){
    cout << endl << endl << "---->Reporte<----";
    for(int i=0;i<TAM; i++){
        cout << endl;
        switch (ani[i].tp)
        {
        case DOMESTICOS:
            cout << endl << "Animal domestico";
            cout << endl << "Descriprcion: " << ani[i].descripcion;
            cout << endl << "Vida promedio: " << ani[i].ct.vidaPromedio << "anios";            
            break;
        case SALVAJE:
            cout << endl << "Animal salvaje";
            cout << endl << "Descriprcion: " << ani[i].descripcion;
            cout << endl << "Region que habita: " << ani[i].ct.regionHabita;
            break;
        case ACUATICOS:
            cout << endl << "Animal acuatico";
            cout << endl << "Descriprcion: " << ani[i].descripcion;
            cout << endl << "Tipo de agua: " << ani[i].ct.tipoAgua;
            break;
        }//fin switch
    }//fin for
}//fin imprimir

void consultarportipo(animal ani[TAM]){
    int tipo;
    cout << endl << "--->Consulta por tipo<------" << endl;
    tipo=capturartipo();
    for(int i=0;i<TAM; i++){
        cout << endl;
        if(tipo==ani[i].tp){
            switch (tipo)
            {
            case 0:
                cout << endl << "Animal domestico";
                cout << endl << "Descripcion: " << ani[i].descripcion;
                cout << endl << "Vida promedio: " << ani[i].ct.vidaPromedio << "anios";            
                break;
            case 1:
                cout << endl << "Animal salvaje";
                cout << endl << "Desciprcion: " << ani[i].descripcion;
                cout << endl << "Region que habita: " << ani[i].ct.regionHabita;
                break;
            case 2:
                cout << endl << "Animal acuatico";
                cout << endl << "Desciprcion: " << ani[i].descripcion;
                cout << endl << "Tipo de agua: " << ani[i].ct.tipoAgua;
                break;
            }//fin switch
        }//fin if   
    }//fin for
}//fin imprimir

