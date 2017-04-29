/*
 * Aurtores: Juan Camilo Patiño Rios- 1667554
 *           Luis Eduardo Henao Padilla-1667483
 *           Jorge Augusto Estacio Almeciga-1667409
 * Descripcion: Taller Ejercicio 3/ punteros
 * Fecha de creacion: 26/04/17
 */

#include <iostream>
#include <string>
using namespace std;

void recolectarDatos(string ** &datos){ 
	
	for (int i=0; i<3; i++){
		datos[i] = new string [2];
		}
		
    string nombre = "";
    string apellido ="";
 
 
 for(int i=0; i<3; i++){
	 
	 cout << " ingrese el nombre de la persona " << (i+1) << endl;
	 cin >> nombre;
	 cout << " ingrese el apellido de la persona " << (i+1) << endl;
	 cin >> apellido;
	 
	 datos[i][0]= nombre;
	 datos[i][1]=apellido;
 }
 
}

void recolectarSalariosPersonas(double * salarios, string ** &datos){
	
	double salario;
	
	for(int i=0; i<3; i++){
		
		cout<<"Ingrese salarios de "<<datos[i][0]<<" "<< datos[i][1] <<endl;
		cin>>salario;
		salarios[i] = salario;
		
	}
	
	
}
void ImprimirResultado (double * &salarios, string ** &datos){
	
	for(int i=0; i<3; i++){
	
	cout << "La persona " << datos[i][0] << " " << datos[i][1] << " devenga " <<  salarios[i] << "." << endl;
	
	}
	
	
}
	

int main(){
	string ** DatosPersonas = new string* [3];
	double *salariosPersonas=0;
	salariosPersonas=new double[3]; 
	
	recolectarDatos(DatosPersonas);
	recolectarSalariosPersonas(salariosPersonas, DatosPersonas);
	ImprimirResultado(salariosPersonas, DatosPersonas );
	 
}
