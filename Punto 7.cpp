	#include <iostream>
	#include <math.h>
	#include <stdio.h>
	#include <string.h>
	using namespace std;
	
	main()
	{
		float precio, costo, contado, credito, orden,val_brochas,val_rodillos,val_sellador;
		int cant_brochas,cant_rodillos,cant_sellador;
		float sub_val1,sub_val2,sub_val3; 
		cout<<"Ingrese la cantidad de brochas"<<endl;
		cin>>cant_brochas;
		cout<<"Ingrese la cantidad de rodillos"<<endl;
		cin>>cant_rodillos;
		cout<<"Ingrese la cantidad de sellador"<<endl;
		cin>>val_sellador;
		cout<<"Ingrese el valor de cada unidad de rodillos"<<endl;
		cin>>val_brochas;
		cout<<"Ingrese el valor de cada unidad de rodillos"<<endl;
		cin>>val_brochas;
		cout<<"Ingrese el valor de cada unidad de sellador"<<endl;
		cin>>val_brochas;
		sub_val1 = (val_brochas * cant_brochas)*0.2;
		sub_val2 = (val_rodillos * cant_rodillos)*0.15;
		sub_val3 = (val_sellador * cant_sellador);
		contado = (sub_val1+sub_val2 +sub_val3)-((sub_val1+sub_val2 +sub_val3)*0.07);
		credito = (sub_val1+sub_val2 +sub_val3);
		cout<<"El valor del pedido dpendiendo de la opcion sera diferente"<<endl;
		cout<<"Contado = "<<contado<<"\n Credito = "<<credito<<endl;
	}
