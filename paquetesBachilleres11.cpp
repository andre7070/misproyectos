#include<iostream>
#include<conio.h>
#include<wchar.h>
#include<string.h>

struct resultados{

char salon[10];
double promedio;
char aux[10];
char nombres[30];
};

struct paquetes{

char paquete1[12];
char paquete2[12];
char paquete3[12];
};

struct materias{

double matematicas;
double espanol;
double geografia;
double historia;
struct paquetes paquetes_materias;
struct resultados resultados_materias;
}
materias[3]
;

int main(){
	
	setlocale(LC_ALL, "");
	using namespace std;
	cout<<"-------------------------------Paquetes---------------------------------";
	cout<<"\n\n";
	cout<<"                           1. Ingenierías"<<endl;
	cout<<"                           2. Biólogos"<<endl;
	cout<<"                           3. Sociales"<<endl;
	cout<<"                           4. Artes"<<endl;
	cout<<"                           5. Contadurías"<<endl;
	cout<<"                           6. Humanidades"<<endl;
	cout<<"------------------------------------------------------------------------";
	cout<<"\n\n";
	cout<<"!! NOTA: Su elección final del paquete dependará del promedio obtenido!!"<<endl;
	cout<<"\n";
	cout<<"Se escogerá el paquete:"<<endl;
	cout<<"\n";
	cout<<"Preferencia 1 si el promedio es mayor o igual a 9 "<<endl;
	cout<<"Preferencia 2 si el promedio es mayor o igual a 8 y menor o igual a 8.9 "<<endl;
	cout<<"Preferencia 3 si el promedio es menor o 8 "<<endl;
	cout<<"\n\n";
	
	for(int i=0; i<3; i++){
		fflush(stdin);
		cout<<"--------------------Llene los siguientes datos--------------------------";
		cout<<"\n\n";
		cout<<"---------------------Alumno "<<i+1<<" Nombre: "; cin.getline(materias[i].resultados_materias.nombres, 30, '\n');
		cout<<"\n\n";
		fflush(stdin);
		cout<<"Ingrese su calificación de mátematicas: ";
		cin>>materias[i].matematicas;
		cout<<"\n";
		cout<<"Ingrese su calificación de geografía: ";
		cin>>materias[i].geografia;
		fflush(stdin);
		cout<<"\n";
		cout<<"Ingrese su calificación de historia: ";
		cin>>materias[i].historia;
		cout<<"\n";
		cout<<"Ingrese su calificación de español: ";
		cin>>materias[i].espanol;
		cout<<"\n";
		materias[i].resultados_materias.promedio=(materias[i].espanol+materias[i].geografia+materias[i].matematicas+materias[i].historia)/4;
		cout<<"Ingrese paquete (preferencia 1): ";
		fflush(stdin);
		cin.getline(materias[i].paquetes_materias.paquete1, 12, '\n');
		cout<<"\n";
		cout<<"Ingrese paquete (preferencia 2): ";
		fflush(stdin);
		cin.getline(materias[i].paquetes_materias.paquete2, 12, '\n');
		cout<<"\n";
		cout<<"Ingrese paquete (preferencia 3): ";
		cin.getline(materias[i].paquetes_materias.paquete3, 12, '\n');
		cout<<"\n\n\n";	
		if(materias[i].resultados_materias.promedio>=9 && materias[i].resultados_materias.promedio<=10){
			strcpy(materias[i].resultados_materias.salon, materias[i].paquetes_materias.paquete1);
		}
		else{
			if(materias[i].resultados_materias.promedio>=8 && materias[i].resultados_materias.promedio<=8.9){
				strcpy(materias[i].resultados_materias.salon, materias[i].paquetes_materias.paquete2);
			}
			else {
				if(materias[i].resultados_materias.promedio<8){
					strcpy(materias[i].resultados_materias.salon, materias[i].paquetes_materias.paquete3);
				}
			}
		}
	}
	cout<<"-----------------------------Reporte------------------------------------";
	cout<<"\n\n";
	for(int i=0; i<3; i++){
		cout<<"\n\n";
		cout<<"******************************Alumno "<<i+1<<" Nombre: "<<materias[i].resultados_materias.nombres;
		cout<<"\n\n";
		cout<<"...................Calificación de las materias.........................";
		cout<<"\n\n";
		cout<<"Matematicas: "<<materias[i].matematicas<<endl;
		cout<<"Espanol: "<<materias[i].espanol<<endl;
		cout<<"Geografia: "<<materias[i].geografia<<endl;
		cout<<"Historia: "<<materias[i].historia<<endl;
		cout<<"..................................................Promedio: "<<materias[i].resultados_materias.promedio<<".........";
		cout<<"\n\n";
		cout<<".......................Paquetes que eligió..............................";
		cout<<"\n\n";
		cout<<"Salon 1: "<<materias[i].paquetes_materias.paquete1<<endl;
		cout<<"Salon 2: "<<materias[i].paquetes_materias.paquete2<<endl;
		cout<<"Salon 3: "<<materias[i].paquetes_materias.paquete3<<endl;
		cout<<"......................Paquete en el que quedó: "<<materias[i].resultados_materias.salon<<"................."<<endl;
	}
	getch();
	return 0;
}
