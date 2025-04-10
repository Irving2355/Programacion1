#include <iostream> 
#include <cstdlib>
#include <ctime>

void llenar(int *,int);
void imprimir(int *,int);

using namespace std;

int main(){
    srand(time(0));

    int *v; //vector dinamico
    int n;

    cout << "Dame el tamano del vector ";
    cin >> n;

    v = new int[n];
    llenar(v,n);
    imprimir(v,n);

    delete []v;
    return 0;
}

void llenar(int *v,int n){
    for(int i=0; i<n; i++){
        *(v+i)=10+rand()%(41);
    }
}

void imprimir(int *v,int n){
    for(int i=0; i<n; i++){
        cout << *(v+i) << " ";
    }
}