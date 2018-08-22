#include <iostream>
#include <conio.h>
 
 using namespace std;
 
 struct direccion{
 	char calle[20];
 	int cp;
 	char ciudad[20];
 };
 
 struct persona{
 	char nombre[20];
 	int edad;
 	float estatura;
 	struct direccion dire;
 };
 
 int main (int argc, char** argv)
 {
 	cout<<"Creador: Diego Gomez Torres"<<endl;
 	cout<<"Ico 22"<<endl<<endl;
 	struct persona P1, P2;
 	
	cout<<"Nombre: ";
 	cin.getline( P1.nombre, 20, '\n');
 	cout<<"Edad: ";
 	cin>>P1.edad;
 	cout<<"Estratura: ";
 	cin>>P1.estatura;
 	cout<<"Calle: ";
 	fflush(stdin);
 	cin.getline(P1.dire.calle,20 ,'\n');
 	
 	//mostrar datos
 	cout<<endl<<"Nombre Guardado: "<<P1.nombre;
 	cout<<endl<<"Edad Guardado: "<<P1.edad;
 	cout<<endl<<"Estatura Guardado: "<<P1.estatura; 	
 	cout<<endl<<"Calle Guardado: "<<P1.dire.calle;
 	
 	getch();
 	return 0;
 }
