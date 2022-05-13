#include "Header.h"

void push(Nodo*& pila, int valor) {
	Nodo* nuevoNodo;
	nuevoNodo = new Nodo;
	nuevoNodo->dato = valor;
	nuevoNodo->sgte = pila;

	pila = nuevoNodo;
}