#include <iostream> 
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main(){
    //matrices dinamicas
    srand(time(0));
    int **m1;
    int r,c,j,i;
    cout << "De cuantos renglones: ";
    cin >> r;
    cout << "De cuantas columnas: ";
    cin >> c;

    //formar el cascaron de la matriz solo los espacios
    m1 = new int *[r]; // un vector de apuntadores

    //creamos las columnas
    for ( i=0; i<r; i++){
        m1[i] = new int[c];
    }

    //captura de datos en la matriz
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            m1[i][j] = 10 + rand()%81;
        }
    }

    //impresion de datos en la matriz
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cout << setw(4) << m1[i][j];
        }
        cout << endl;
    }

    //liberar memoria
    //primero eliminamos las columnas
    for(i=0; i<r; i++){
        delete [] m1[i]; 
    }

    //eliminar vector de apuntadores
    delete [] m1;
    return 0;
}