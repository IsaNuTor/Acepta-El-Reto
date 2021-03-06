// Isabel N��ez de la Torre
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void resuelve();
int numPares(int v[], int n);

const int MAX_TAM = 10000;
/*
	219 - La loteria de la pe�a atl�tica

	Implementacion en la funcion numPares.
	La complejidad es O(n) => Porque solamente se recorre el vector 1 vez
	y cada operaci�n del vector se realiza en tiempo constante.
*/
int main() {
	// Para la entrada por fichero.
	/*#ifndef DOMJUDGE
	ifstream in("sample219.in");
	auto cinbuf = cin.rdbuf(in.rdbuf());
	#endif*/

	int casos;
	cin >> casos;

	for (int i = 0; i < casos; ++i) {
		resuelve(); 
	}

	//system("PAUSE");

	return 0;
}

// Se encarga de leer la entrada, calcular la respuesta y escribirla.
void resuelve() {
	int datos[MAX_TAM];
	int n;
	// Lectura de los datos
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> datos[i];
	}
	// Procesado de datos.
	int respuesta = numPares(datos, n);

	// Escritura de la respuesta
	cout << respuesta << "\n";
}

// { Pre: 0 <= n <= longitud(v) }
int numPares(int v[], int n) /* return ret */
{
	int ret = 0;
	int i = 0;

	while (i < n) {
		if (v[i] % 2 == 0) ret++;
		++i;
	}

	return ret;
}
// { Post: ret =  #i: 0 <= i < n: v[i] mod 2 = 0 }