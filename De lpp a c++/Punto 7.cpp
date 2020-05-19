#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;


main()
{
	char direccion [30], nombre [30], telefono[12];
	
	cout<<"Programa para solicitar los datos"<<endl;
	
	cout<<"Digite su nombre"<<endl;
	cin.getline(nombre,30,'\n');
	
	cout<<"Digite su telefono"<<endl;
	cin.getline(telefono,12,'\n');
	
	cout<<"Digite su direccion"<<endl;
	cin.getline(direccion,30,'\n');
	
	cout<<"Su nombre es: "<<nombre<<endl;
	cout<<"Su telefono es: "<<telefono<<endl;
	cout<<"Su direccion es: "<<direccion<<endl;
	
	return 0; 
}
