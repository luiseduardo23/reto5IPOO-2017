/*
 * Autor 1 : Jorge Augusto Estacio
 * Autor 2 : Juan Camilo Patiño
 * Autor 3: Luis Eduardo Henao
 * Archivo: practica2P1.cpp
 * descripcion: pregunta 1 de la practica 2
 * fecha: 26/04/2017
 */
 
#include <iostream>
#include "Calculadora.h"
using namespace std;

void seleccion (int opcion, Calculadora calculadora1){
	
		switch(opcion){
		
		case 1:
			cout << "El resultado es: " << calculadora1.sumar(calculadora1.getNumeroA(), calculadora1.getNumeroB()) << endl;
			break;
		case 2:
			cout << "El resultado es: " << calculadora1.restar(calculadora1.getNumeroA(), calculadora1.getNumeroB()) << endl;
			break;
		case 3:
			cout << "El resultado es: " << calculadora1.multiplicar(calculadora1.getNumeroA(), calculadora1.getNumeroB()) << endl;
			break;
		case 4:
			cout << "El resultado es: " << calculadora1.dividir(calculadora1.getNumeroA(), calculadora1.getNumeroB()) << endl;
			break;
		case 5:
			cout << "El resultado es: " << calculadora1.modulo(calculadora1.getNumeroA(), calculadora1.getNumeroB()) << endl;
			break;
		case 6:
			calculadora1.salir();
			break;
		default:
			cout << "Comando invalido" << endl;
			break;
		}
	
	}

int main(int argc, char *argv[]){
	
	Calculadora calculadora1;
	int numA;
	int numB;
	int opcion;
	
	cout << "ingrese el primer numero: " << endl;
	cin >> numA;
	calculadora1.setNumeroA(numA);
	
	cout << "ingrese el segundo numero: " << endl;
	cin >> numB;
	calculadora1.setNumeroB(numB);

	cout << "Seleccione una opcion para operar" << endl;
	cout << "1 - sumar\n2 - Restar\n3 - multiplicar\n4 - dividir\n5 - módulo\n6 - salir" << endl;
	cin >> opcion;
	seleccion(opcion, calculadora1);
	
	}
