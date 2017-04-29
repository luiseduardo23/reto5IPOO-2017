
#include "Persona.h"
#include <string>

using namespace std;


Persona::Persona(string nombreIn, string apellidoIn, double salarioIn){
	nombre=nombreIn;
	apellido= apellidoIn;
	salario= salarioIn;

}

Persona::~Persona(){}

string Persona::getNombre(){
	return nombre;
}
string Persona::getApellido(){
	return apellido;
}
int Persona::getSalario(){
	return salario;
}


void Persona::setNombre(string nombreIn){
	nombre = nombreIn;
}
void Persona::setApellido(string apellidoIn){
	apellido = apellidoIn;
}
void Persona::setSalario(double salarioIn){
	apellido = apellidoIn;
}

