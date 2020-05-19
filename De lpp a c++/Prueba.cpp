#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

main()
{
	string nombre , telefono;
	char direccion [83];
	
	cout<<"Programa para solicitar los datos"<<endl;
	
	cout<<"Digite los espacios con raya al piso'_'"<<endl;
	
	cout<<"Digite su nombre"<<endl;
	cin>>nombre;
	cout<<"Digite su telefono"<<endl;
	cin>>telefono;
	cout<<"Digite su direccion"<<endl;
	cin.getline(direccion,40,'\n');
	
	cout<<"Su nombre es: "<<nombre<<endl;
	cout<<"Su telefono es: "<<telefono<<endl;
	cout<<"Su direccion es: "<<direccion<<endl;
	
	return 0; 
}
