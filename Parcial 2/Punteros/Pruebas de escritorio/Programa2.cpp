#include <iostream>

int misterio (char * );
using namespace std;

int main(){
    int x;
    char cad1 [30] ;
    cout<<endl<<"Dame un cadena:";
    cin.getline(cad1,30);
    x = misterio(cad1);
    cout<<endl<<x;
    return 0;
}

int misterio(char *s){
    int x=0;
    for(; *s!='\0'; s++){
        ++x;
    }
    return x;
}
