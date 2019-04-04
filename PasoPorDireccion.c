#include <iostream>

int main(){

	int numbers[5];
	int * p;
	p = numbers; // P apunta a la dirección de memoria de numbers
	*p = 10; // El contenido al que apunta p = 10
	p++; // Paso a la segunda posición de numbers
	*p = 20; // El contenido al que apunta p = 20
	p = &numbers[2]; // Paso a la tercera posición de numbers
	*p = 30; // El contenido al que apunta p = 30
	p = numbers + 3; // Paso a la cuarta posición de numbers
	*p = 40; // El contenido al que apunta p = 40
	p = numbers; // Pongo a p apuntando a numbers (posición 0 del array)
	*(p+4) = 50; // El contenido al que apunta p -> numbers[0]
		     // le sumo 4 posiciones p-> numbers[4] y le meto un 
	
	for (int n = 0; n < 5; n++){
		std:: cout << numbers[n] << std:: endl ;
	}
	return 0;
}
