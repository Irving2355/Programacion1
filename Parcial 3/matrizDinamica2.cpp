#include <iostream> 
#include <cstdlib>
#include <ctime>
#include <iomanip>

//prototipos de funciones
void imprimirMatriz(int **, int , int);
void llenarMatriz(int **, int, int);
int **crearEspacio(int, int);
int *sumarRenglones(int *[], int, int);

using namespace std;

int main(){
    int **m;
    int r,c,i;
    cout << "Cuantos Renglones: ";
    cin >> r;
    cout << "Cuantas columnas: ";
    cin >> c;
    m=crearEspacio(r,c);

    llenarMatriz(m,r,c);
    imprimirMatriz(m,r,c);
    int *a = sumarRenglones(m,r,c);
    for(int i=0; i<r; i++){
        cout << endl << a[i];
    }

    //liberar memoria
    for(i=0; i<r; i++){
        delete [] m[i];
    }
    delete [] m;
    delete [] a;
    return 0;
}

int **crearEspacio(int r, int c){
    int **aux;

    aux = new int *[r]; // vector de apuntadores
    for(int i=0; i<r; i++)
        aux[i] = new int[c];
    
    return aux;
}

void llenarMatriz(int **m, int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            // 3 sintaxis
            //m[i][j] = 1+rand()%81; // forma menos eficiente
            *(*(m+i)+j) = 1+rand()%81; //forma mas eficiente
            //*(m[i]+j) = 1+rand()%81;
        }
    }
}

void imprimirMatriz(int **m, int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            // 3 sintaxis
            //cout << setw(5) << m[i][j]; // forma menos eficiente
            cout << setw(5) << *(*(m+i)+j); //forma mas eficiente
            //cout << setw(5) << *(m[i]+j);
        }
        cout << endl;
    }
}

int *sumarRenglones(int *m[], int r, int c){
    cout << "\n Sumatoria de renglones \n";
    int *a = new int[r];
    for(int i=0; i<r; i++){
        a[i] = 0;
        for(int j=0; j<c; j++){
            a[i] += *(*(m+i)+j);
        }
    }
    return a; // retornamos direccion de a
}