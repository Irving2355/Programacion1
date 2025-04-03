/*
Comprender y ver como es que se afecta los datos y las
direcciones de memoria al usar los punteros "*" y los 
operadpres de referencia "&" 
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    int *ptr;
    int num=7;
    int *ptr2;

    cout << "\n num: "<<&num;
    ptr=&num;
    cout << "\n ptr: "<< ptr;
    cout << "\n &ptr: " << &ptr;
    cout << "\n *ptr: " << *ptr;

    *ptr=15;
    cout <<"\n num: " << num;

    ptr2=ptr;
    cout << "\nptr2: " << ptr2;
    *ptr2 = 30;
    cout << "\nnum: " << num << "  *ptr: " << *ptr;
    cout << endl;
    //system("PAUSE");
    return EXIT_SUCCESS; //return 0;
}