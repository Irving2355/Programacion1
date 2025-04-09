#include <iostream>
void misterio(char *, char *);
using namespace std;
int main(){
    char cad1[30],cad2[30];
    cout << endl << "Dame una cadena";
    cin.getline(cad1,30);
    misterio(cad1,cad2);
    cout<<endl<<cad1;
    cout<<endl<<cad2;
    return 0;
}

void misterio(char *s1, char *s2){
    for(; *s1!='\0'; s1++)
        *s2++=*s1;
    *s2='\0';
}