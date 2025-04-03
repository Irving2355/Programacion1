#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main(){
    //formas de inicializar
    int *ap1;
    ap1=NULL; 
    int *ap2 = NULL;
    
    int n=8;
    int *ap3;
    ap3=&n;
    int *ap4=&n;

    //inicializar usando memoria dinamica
    int *ap5;
    ap5 = new int;
    *ap5=9;
    cout << "\n*ap5: " << *ap5;
    char *ap6 = new char;
    *ap6 = '@';
    cout << "\n*ap6: " << *ap6;
    delete ap5;
    delete ap6;
    return 0;
}