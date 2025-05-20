#include <iostream>
#include "fecha.h"
using namespace std;
void estlabecerFecha(Fecha &f, int d,int m, int a){
	f.dia = d;
	f.mes = m;
	f.anio = a;
}

void mostrarFecha(const Fecha &f){
	cout << "Fecha: " << f.dia << "/" 
	<< f.mes << "/" << f.anio << endl;
}

bool esBisiesto(int anio){
	return (anio % 4 == 0 && anio % 100 != 0) 
	|| (anio % 400 == 0);
}