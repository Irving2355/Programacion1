#include <iostream> 
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iomanip>

//prototipos de funciones
int **totalrenycol(int ren, int col);
void llenar(int **matriz, int ren, int col);
void imprimir(int **matriz, int ren, int col);
void zigzag(int **matriz, int ren, int col);
void llenarnom(char **matriz, int ren);
void imprimirestudiantes(char **matriz, int ren, char *estudiante);
void imprimirnom(char **matriz, int ren);

using namespace std;

int main(){
    srand(time(0));
    int **mat = totalrenycol(5,5);
    llenar(mat, 5,5);
    imprimir(mat, 5,5);
    cout << endl << "ZigZag" << endl;
    zigzag(mat, 5,5);
    return 0;
}

//crea una matriz vacia de enteros
int **totalrenycol(int ren, int col){
    int **matriz = new int*[ren];
    for(int i=0; i<ren; i++){
        matriz[i] = new int[col];
    }
    return matriz;
}

void llenar(int **matriz, int ren, int col){
    for(int i=0; i<ren; i++){
        for(int j=0; j<col; j++){
            matriz[i][j] = 1 + rand()%50;
        }
    }
}
void imprimir(int **matriz, int ren, int col){
    for(int i=0; i<ren; i++){
        for(int j=0; j<col; j++){
            cout << *(*(matriz + i) + j) << " ";
        }
        cout << endl;
    }
}

void zigzag(int **matriz, int ren, int col){
    for(int i=0; i<ren; i++){
        if(i % 2 == 0){
            //fila va de izq a der
            for(int j=0; j<col; j++){
                cout << setw(4) << right << matriz[i][j];
            }
        }else{
            //fila der a izq
            //5-1  
            for(int j=col-1; j>=0; j--){
                cout << setw(4) << left << matriz[i][j];
            }
        }
        cout << endl;
    }
}