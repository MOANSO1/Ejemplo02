//Crear una funcion que permita invertir un numero entero haciendo uso de una pila.

#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	Nodo* pila = NULL;

	int numero, n, numero2, decimal = 1;
	cout << "Ingrese un numero a invertir: ";
	cin >> numero;

	while (numero > 0) {
		n = numero;
		numero = numero / 10;
		push(pila, n - (numero * 10));
		decimal = decimal * 10;
	}
	n = 0;
	decimal = 1;
	while (pila != NULL) {
		numero2 = pop(pila) * decimal;
		n = n + numero2;
		decimal = decimal * 10;

	}
	cout << "numero invertido:";
	cout << n << endl;

	return 0;
}