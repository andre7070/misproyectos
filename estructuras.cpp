#include <iostream>
#include <conio.h>

using namespace std;

struct Direccion {
	char calle[20];
	int codigoPostal;
	int numeroCasa;
	char fraccionamiento[20];
};

struct Empleado {
	char nombre[20];
	char sexo[10];
	int edad;
	float estatura;
	struct Direccion direccionEmpleado;
} empleado[2];

int main() {
	//Pedir datos al usuario
	for(int i = 0; i < 2; i++){
		fflush(stdin); // vaciar el buffer
		
		cout << "Campo informacion del empleado: " << i + 1 << endl;
		cout << "\n";
	
		cout << "Ingrese su nombre: ";
		cin.getline(empleado[i].nombre, 20, '\n');
		cout << "\n";
		
		cout << "Ingrese su sexo: ";
		cin.getline(empleado[i].sexo, 10, '\n');
		cout << "\n";
		
		fflush(stdin); // vaciar el buffer
		
		cout << "Ingrese su edad: ";
		cin >> empleado[i].edad;
		cout << "\n";
		
		cout << "Ingrese su estatura: ";
		cin >> empleado[i].estatura;
		cout << "\n\n";
		
		cout << "Campo de direccion del empleado: " << i + 1 << endl;
		cout << "\n\n";
		
		fflush(stdin); // vaciar el buffer
		
		cout << "Ingrese calle: ";
		cin.getline(empleado[i].direccionEmpleado.calle, 20, '\n');
		cout<<"\n";
		
		cout<<"Ingrese el codigo postal: ";
		cin >> empleado[i].direccionEmpleado.codigoPostal;
		cout << "\n";
		
		cout << "Ingrese el numero de la casa: ";
		cin >> empleado[i].direccionEmpleado.numeroCasa;
		cout << "\n";
		
		cout << "Ingrese su fraccionamiento: ";
		cin.getline(empleado[i].direccionEmpleado.fraccionamiento, 20, '\n' );
	}
	
	//Mostrar los datos del usuario
	cout << "\n\n";
	cout << "-------------Datos de los empleados----------------" << endl;
	
	for(int i = 0; i < 2; i++){
		
		cout << "------Empleado" << i + 1 << "-------" << endl;
		cout << "\n";
		
		cout << "--Datos generales--" << endl;
		cout << "\n";
		
		cout << "Nombre: " << empleado[i].nombre << endl;
		cout << "Sexo:" << empleado[i].sexo << endl;
		cout << "Edad: " << empleado[i].edad << endl;
		cout << "Estatura: " << empleado[i].estatura << endl;
		
		cout << "Datos de direccion" << endl;
		cout << "\n";
		
		cout << "Calle: " << empleado[i].direccionEmpleado.calle << endl;
		cout << "Codigo postal: " << empleado[i].direccionEmpleado.codigoPostal << endl;
		cout << "Numero de casa: "<< empleado[i].direccionEmpleado.numeroCasa << endl;
		cout << "Fraccionamiento: " << empleado[i].direccionEmpleado.fraccionamiento << endl;
		
		cout << "\n\n";
	}
	
	getch();
	
	return 0;	
}
