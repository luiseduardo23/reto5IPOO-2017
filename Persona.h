 #ifndef PERSONA_H
 #define PERSONA_H
 
using namespace std;
 
class Persona{
	private:
		string nombre;
		string apellido;
		double salario;
		
	public:
		Persona();
		~persona();
		
		string getNombre();
		string getApellido();
		double gerSalario();
		
		void setNombre(string nombreIn);
		void setApellido(string apellidoIn);
		void setSalario(double salarioIn);
};
#endif
