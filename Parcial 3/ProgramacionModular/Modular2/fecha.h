#ifndef FECHA_H //si no esta definido
#define FECHA_H //Define FECHA_H

struct Fecha{
	int dia,mes,anio;	
};

//prototipos de funcion

void estlabecerFecha(Fecha &f, int d,int m, int a);
void mostrarFecha(const Fecha &f);
bool esBisiesto(int anio);

#endif //fin de la definicion