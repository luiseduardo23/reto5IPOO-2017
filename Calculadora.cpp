/*
* Autor 1: Jorge Augusto Estacio
* Autor 2 : Juan Camilo Patiño
* Autor 3: Luis Eduardo Henao
* Archivo: Calculadora.cpp
* Descripción: funciones de la clse calculadora
* Fecha: 26/04/17
*/

#include "Calculadora.h"
#include <iostream>
using namespace std;

Calculadora::Calculadora(){
	
	numeroA = 0;
	numeroB = 0;
	resultado = 0;
	
	}

Calculadora::~Calculadora(){
	
	
	
	}

int Calculadora::getNumeroA(){
	
	return numeroA;
	
	}

int Calculadora::getNumeroB(){
	
	return numeroB;
	
	}
	
void Calculadora::setNumeroA(int numeroAIn){
	
	this->numeroA = numeroAIn;
	
	}

void Calculadora::setNumeroB(int numeroBIn){
	
	this->numeroB = numeroBIn;
	
	}

	
int Calculadora::sumar(int numeroAIn, int numeroBIn){
	
	this->resultado = numeroAIn + numeroBIn;
	return resultado;
	
	}

int Calculadora::restar(int numeroAIn, int numeroBIn){
	
	this->resultado = numeroAIn - numeroBIn;
	return resultado;
	
	}
	
int Calculadora::multiplicar(int numeroAIn, int numeroBIn){
	
	this->resultado = numeroAIn * numeroBIn;
	return resultado;
	
	}

double Calculadora::dividir(int numeroAIn, int numeroBIn){
	
	this->resultado = numeroAIn / numeroBIn;
	return resultado;
	
	}

int Calculadora::modulo(int numeroAIn, int numeroBIn){
	
	this->resultado = numeroAIn % numeroBIn;
	return resultado;
	
	}

void Calculadora::salir(){
	
	

	}
