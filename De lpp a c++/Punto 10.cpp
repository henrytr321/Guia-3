#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

main()
{
		float precio_art,iva,precio_final;
		cout<<"Programa para hallar el valor de un articulo con iva"<<endl;
		cout<<"Digite el valor del articulo"<<endl;
		cin>>precio_art;
		iva = (precio_art *16)/100;
		precio_final = precio_art + iva;
		cout<<"El valor unitario es "<<precio_art<<endl;
		cout<<"El iva es "<<iva<<endl;
		cout<<"El precio final es "<<precio_final<<endl;
}
