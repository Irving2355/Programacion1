/*
--- Programar juego craps ---
uso y aprendizaje de los "enum" 
para el manejo del juego 
los "enum" es un tipo de dato que permite 
asignar nombres a un conjunto de valores enteros, 
facilitando la legibilidad y mantenimiento del código. 
Se usa principalmente para representar conjuntos 
de valores constantes relacionados.
*/
#include <iostream>
#include <cstdio>
#include <ctime>
#include <cstdlib>

using namespace std;

enum Status{
    CONTINUA,
    GANA,
    PIERDE
};

int tirados(); //prototipo de la funcion

int main(){
    int suma,mipunto;
    char resp='s';

    Status estadoJuego;
    srand(time(0));

    while(resp=='s' || resp=='S'){
        system("cls");
        suma=tirados();

        switch (suma)
        {
        case 7:
        case 11:
            estadoJuego=GANA;
            break;
        case 2:
        case 3:
        case 12:
            estadoJuego=PIERDE;
            break;
        default:
            estadoJuego=CONTINUA;
            mipunto=suma;
            cout << "\n Tu punto es: " << mipunto <<endl;
            break;
        }

        while (estadoJuego==CONTINUA)
        {
            suma=tirados();
            if(suma==mipunto)
                estadoJuego=GANA;
            else
                if(suma==7)
                    estadoJuego=PIERDE;
        }
        if(estadoJuego==GANA){
            cout << "GANASTE" << endl;
        }else{
            cout << "PERDISTE" << endl;
        }

        cout << "\n jugar otra vez s/n ";
        fflush(stdin);
        cin>>resp;
        
    }
    return 0;
}

int tirados(){
    int dado1,dado2,sumaDados;
    
    dado1=1+rand()%6;
    dado2=1+rand()%6;
    sumaDados=dado1+dado2;
    cout << "Jugador tiro " << dado1 << " + " << dado2 << " = " << sumaDados << endl;
    return sumaDados;
}
