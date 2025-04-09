#include <iostream> 

int *funcion (int x, int *p1, int *vec, int z);
using namespace std; 

int main(){
    int x=5, y=6;
    int *ptr;
    int v[3]={10,20,30};
    ptr=funcion(x,&y,v,v[2]); 
    cout<<endl<<v[2];
    cout<<endl<<v[1];
    cout<<endl<<v[0];
    cout<<endl<<x;
    cout<<endl<<y;
    cout<<endl<<*ptr;
    return 0; 
}

int *funcion (int x, int *p1, int *vec, int z){
    int *pt=new int;
    *pt = z + *p1;
    int k = --z * (*p1)++ + x;
    cout <<"k: "<< k;
    *(vec+1) += 4;
    *pt += ++x;
    *vec = *vec + *pt +k;
    return pt;
}