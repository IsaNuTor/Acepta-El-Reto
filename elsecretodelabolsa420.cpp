// Isabel Núñez de la Torre
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void resuelve();

int sumaBolsa(int v[], int n, int suma);

const int MAX_TAM = 10000;
/*
El secreto de la bola. Problema 420 de acepta el reto.

Nos devuelve las veces que se produce la suma en la secuencia.

Implementado en la funcion sumaBolsa.

La complejidad es O(n) => Porque solamente se recorre el vector 1 vez
y cada operación del vector se realiza en tiempo constante.
*/
int main() {
	// Para la entrada por fichero.

	/*#ifndef DOMJUDGE
	ifstream in("sample420.in");
	auto cinbuf = cin.rdbuf(in.rdbuf());
	#endif/*/

	resuelve();

	//system("PAUSE");

	return 0;
}

// Se encarga de leer la entrada, calcular la respuesta y escribirla.
void resuelve() {
	int datos[MAX_TAM];
	int i=0,n, suma, sumaaux = 0;

	// Lectura de los datos.
	cin >> n;
	while (i < n) {
		cin >> suma;
		for (int i = 0; i < n; ++i) {
			cin >> datos[i];
			sumaaux += datos[i];
		}
		// Procesado de datos.
		int respuesta = sumaBolsa(datos, n, suma);

		// Escritura de la respuesta
		cout << respuesta << "\n";

		// Lectura de los datos
		i++;
	}
}

int sumaBolsa(int v[], int n, int suma) /* return ret */
{
	int ret, i=0, aux=0;

	while(i < n || )

	return ret;
}
