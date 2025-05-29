#include <iostream>
#include <limits>
#include "lista.h"

using namespace std;

//limpiador de buffer
void limpiarBuffer(){
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main(){
	Lista* lista = new Lista;
	lista->cabeza = nullptr;
	lista->longitud = 0;
	
	Libro libro;
	char con = 's';
	while(con == 's' || con == 'S'){
		cout << "Nombre del libro: ";
		cin.ignore();
		//limpiarBuffer();
		getline(cin, libro.titulo);
		cout << "Autor: ";
		//cin.ignore();
		//limpiarBuffer();
		getline(cin, libro.autor);
		cout << "ISBN: ";
		//cin.ignore();
		//limpiarBuffer();
		getline(cin, libro.isbn);
		
		insertarPrincipio(lista, libro);
		
		cout << "otro mas? ";
		cin >> con;
	}
	
	cout << "\n\n Lista de libros: \n\n";
	mostrarLista(lista);
	
	liberarLista(lista);
	delete lista;
	return 0;
}