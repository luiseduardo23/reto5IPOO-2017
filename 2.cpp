/*
 * Aurtores: Juan Camilo Patiño Rios- 1667554
 *           Luis Eduardo Henao Padilla-1667483
 *           Jorge Augusto Estacio Almeciga-1667409
 * Descripcion: Taller Ejercicio 3/ punteros
 * Fecha de creacion: 26/04/17
 */

#include <iostream>

using namespace std;

void modificar(int * ptr){
	*ptr=*ptr * *ptr;
}

int main(){
	int * ptrVariable=0;
	int entero1=100;
	
	ptrVariable= &entero1;
	modificar (ptrVariable);
	
	int entero2=300;
	
	ptrVariable= &entero2;
	modificar (ptrVariable);
	
	cout << entero1 << " " << entero2 << endl;		
}

	
