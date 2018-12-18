// Isabel Núñez de la Torre
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void resuelve();

const int TAM_MAX = 100000;
long long int prodParejas(int v[], int n);

/*
Erasmus Problema 242 de acepta el reto.

Nos devuelve la suma de todas las multiplicaciones de parejas distintas.

Implementado en la funcion prodParejas.

La complejidad es O(n) => Porque solamente se recorre el vector 1 vez
y cada operación del vector se realiza en tiempo constante.
*/
int main() {
	// Para la entrada por fichero.
	
	/*#ifndef DOMJUDGE
	ifstream in("sample242.in");
	auto cinbuf = cin.rdbuf(in.rdbuf());
	#endif*/

	resuelve();

	//system("PAUSE");

	return 0;
}

// Se encarga de leer la entrada, calcular la respuesta y escribirla.
void resuelve() {
	int n;
	int v[TAM_MAX];
	// Lectura de los datos.
	cin >> n;

	while (n != 0) {

		for (int i = 0; i < n; ++i) {
			cin >> v[i];
		}

		// Procesado de datos.
		long long int respuesta = prodParejas(v, n);

		// Escritura de la respuesta
		cout << respuesta << "\n";

		// Lectura de los datos
		cin >> n;
	}
}

/*{Pre: 0 <= n <= longitud(v)}*/
long long int prodParejas(int v[], int n) /* return ret */
{
	long long int ret = 0;
	int i = 0;
	long long int sumAc = 0; // Suma acumulada

	/*{I: 0 <= i <= n ^ sumAc = sum j: 0 <= j < i: v[i] ^ ret = sum j,k: 0 <= j < k < i: v[j] * v[k]}*/
	while (i < n) {
		ret += v[i] * sumAc;
		sumAc += v[i];
		++i;
	}
	return ret;
}
/*{Post: ret = sum i,j: 0 <= i < j < n: v[i] * v[j]}*/
