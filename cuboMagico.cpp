#include <iostream>
#include <cstdlib>
#include <ctime>
#define TAM 100

using namespace std;

void generarMatriz(int matriz[][TAM], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            matriz[i][j] = rand() % 9 + 1;
        }
    }
}

void imprimirMatriz(int matriz[][TAM], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << matriz[i][j] << '\t';
        }
        cout << endl;
    }
}

bool esCuadradoMagico(int matriz[][TAM], int n){
    int sumaReferencia = 0;
    for(int i=0; i<n; i++){
        sumaReferencia += matriz[0][i];
    }

    //verificar las demas filas
    for(int i=0; i<n; i++){
        int sumaFila = 0;
        for(int j=0; j<TAM; j++){
            sumaFila += matriz[i][j];
        }
        if(sumaFila != sumaReferencia) 
            return false;
    }

    //verificar columna
    for(int i=0; i<n; i++){
        int sumaColumna = 0;
        for(int j=0; j<n; j++){
            sumaColumna += matriz[j][i];
        }
        if(sumaColumna != sumaReferencia) 
            return false;
    }

    //diagonal 1
    int sumaDiagonal1 = 0;
    for(int i=0; i<n; i++){
        sumaDiagonal1 += matriz[i][i];
    }

    if(sumaDiagonal1 != sumaReferencia) 
        return false;

    //diagonal secundaria
    int sumaDiagonal2 = 0;
    for(int i=0; i<n; i++){
        sumaDiagonal2 += matriz[i][n-1-i];
    }

    if(sumaDiagonal2 != sumaReferencia) 
        return false;

    return true;
}

int main(){
    srand(time(0));
    int n,intentos=0;

    cout << "ingrese el tamano: ";
    cin >> n;

    int matriz[TAM][TAM];

    do{
        generarMatriz(matriz,n);
        intentos++;
    }while(!esCuadradoMagico(matriz,n));

    cout << endl << "Cuadrado magico en " << intentos << "  intentos: \n";
    imprimirMatriz(matriz,n);
    return 0;
    
}