#include "Header.h"
#include <iostream>

void clear(Nodo*& pila) {
	Nodo* aux;
	while (pila != NULL) {
		aux = pila;
		pila = pila->sgte;
		delete aux;
	}
}