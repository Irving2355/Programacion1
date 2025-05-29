#ifndef LISTA_H
#define LISTA_H

#include "libro.h"
#include <iostream>

struct Nodo{
	Libro libro;
	Nodo *siguiente;	
};

struct Lista{
	Nodo *cabeza;
	int longitud;
};

//crear un nuevo nodo con un libro dado
Nodo* crearNodo(const Libro& libro){
	Nodo* nodo = new Nodo;
	/*
	int x=5;
	int y=x;
	*/
	nodo->libro = libro;
	//nodo->siguiente = NULL;
	nodo->siguiente = nullptr;
	return nodo;
}

void insertarPrincipio(Lista* lista
, const Libro& libro){
	Nodo* nuevo = crearNodo(libro);
	nuevo->siguiente = lista->cabeza;
	lista->cabeza = nuevo;
	lista->longitud++;
}

void mostrarLista(const Lista* lista){
	Nodo* actual = lista->cabeza;
	
	while(actual != nullptr){
		std::cout << "Titulo: " << actual->libro.titulo << std::endl;
		std::cout << "Autor: " << actual->libro.autor << std::endl;
		std::cout << "ISBN: " << actual->libro.isbn << std::endl << std::endl;
		//libro.autor o libro.isbn
		
		actual = actual->siguiente;
	}
}

//Liberar memoria de la lista
void liberarLista(Lista* lista){
	Nodo* actual = lista->cabeza;
	while(actual != nullptr){
		Nodo* temp = actual;
		actual = actual->siguiente;
		delete temp;
	}
	lista->cabeza = nullptr;
	lista->longitud = 0;
}
#endif