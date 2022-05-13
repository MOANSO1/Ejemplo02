#include "Header.h"

int pop(Nodo*& pila) {
	Nodo* aux = pila;
	int valor = aux->dato;
	pila = pila->sgte;
	delete aux;
	return valor;
}