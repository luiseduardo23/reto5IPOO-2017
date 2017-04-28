/*
* Autor 1: Jorge Augusto Estacio 
* Autor 2 : Juan Camilo Patiño
* Autor 3: Luis Eduardo Henao
* Archivo: Calculadora.h
* Descripción: funciones de la clse calculadora
* Fecha: 26/04/17
*/

#ifndef CALCULADORA_H
#define CALCULADORA_H

class Calculadora{
	
	private:
		int numeroA;
		int numeroB;
		double resultado;
	
	public:
		Calculadora();
		~Calculadora();
		int getNumeroA();
		int getNumeroB();
		void setNumeroA(int numeroAIn);
		void setNumeroB(int numeroBIn);
		int sumar(int numeroAIn, int numeroBIn);
		int restar(int numeroAIn, int numeroBIn);
		int multiplicar(int numeroAIn, int numeroBIn);
		double dividir(int numeroAIn, int numeroBIn);
		int modulo(int numeroAIn, int numeroBIn);
		void salir();
	};
#endif
