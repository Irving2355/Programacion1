#include <iostream>
int misterio(char *, char *);
using namespace std;
int main(){
    int x;
    char cad1[30],cad2[30];
    cout << endl << "Dame una cadena";
    cin.getline(cad1,30);
    cout << endl << "Dame otra cadena";
    cin.getline(cad2,30);
    for(int i=0; i<5;i++){
    	cout << "\n direccion de memoria cad1[i]: "<< &cad1[i];
	}
	cout << endl;
    cout << endl << "&cad1: " << &cad1;
    cout << endl << "&cad2: " << cad2;
    cout << "\n\n";
    x=misterio(cad1,cad2);
    cout<<endl<<x;
    return 0;
}

int misterio(char *s1, char *s2){
	cout << endl<< "*s1: " << &s1;
	cout << endl<< "*s2: " << *s2;
    for(; *s1!='\0' || *s2!='\0'; s1++,s2++){
        if(*s1 != *s2)
            return 0;
    }
    return 1;
}