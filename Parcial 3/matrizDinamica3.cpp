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
    return 0;
}