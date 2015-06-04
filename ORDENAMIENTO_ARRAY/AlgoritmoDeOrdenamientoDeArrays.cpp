/* Federico León Bruzone
 * "Ordenamiento por inserción de un array"
 * 4/6/2015
 */

#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

void imprimirArray(int [], int);
void ordenarArray(int [], int);

int main() {
	const int arraySize = 10;
	int datos[arraySize] = {34, 26, 4, 10, 77, 51, 93, 30, 5, 52};
	
	cout << "Arreglo desordenado (estado inicial):\n";
	imprimirArray(datos, arraySize);
	
	cout << "\nInicia ordenamiento por insercion:\n";
	ordenarArray(datos, arraySize);
}

void imprimirArray(int a[], int size){
	for (int i = 0; i < size; i++){
		cout << setw(4) << a[i];
	}
	cout << endl;
}

void ordenarArray(int a[], int size){
	int insertar;
	
	for(int next = 1; next < size; next++){
		insertar = a[next];
		int moverElemento = next;
				
		while((moverElemento > 0) && (a[moverElemento -1] > insertar)){
			a[moverElemento] = a[moverElemento - 1];
			
			moverElemento--;
		}
		
		a[moverElemento] = insertar;
		imprimirArray(a, size);
	}
}
