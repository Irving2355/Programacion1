#include <iostream>
#include "fecha.h"
using namespace std;
int main(){
	Fecha hoy;
	estlabecerFecha(hoy, 16, 05, 2025);
	mostrarFecha(hoy);
	if(esBisiesto(hoy.anio)){
		cout << "El anio es bisiesto";
	}else{
		cout << "El anio no es bisiesto";
	}
	return 0;
}