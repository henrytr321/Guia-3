#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;


main()
{
	char nombre [120];  
	int tipo,cant_escob,cant_recog,cant_aroma;
	float subtotal, val_escob,val_recog, val_aroma,descuento;
	float total, valor_descuento;
	
	cout<<"Digite su nombre por favor"<<endl;
	cin.getline(nombre,120,'\n');
	
	cout<<"Digite la cantidad de escobas que compra"<<endl;
	cin>>cant_escob;
	
	cout<<"Digite la cantidad de recogedores que compra"<<endl;
	cin>>cant_recog;
	
	cout<<"Digite la cantidad de aromatizantes que compra"<<endl;
	cin>>val_aroma;
	
	cout<<"Digite el valor de la escoba"<<endl;
	cin>>val_escob;
	
	cout<<"Digite el valor del recogedor"<<endl;
	cin>>val_recog;
	
	cout<<"Digite el valor de los aromatizantes"<<endl;
	cin>>val_aroma;
	
	subtotal = (cant_escob*val_escob)+(cant_recog*val_recog)+(cant_aroma*val_aroma);
	
	cout<<"Digite el tipo de cliente"<<endl;
	cout<<"Los tipos de cliente son:\ntipo1 = 1\n";
	cout<<"tipo2 = 2\ntipo3 = 3\ntipo4 = 4"<<endl;
	cin>>tipo;
	switch (tipo)
	{
		case 1: descuento = subtotal *0.05;
		valor_descuento = 5;break;
		case 2: descuento = subtotal *0.08;
		valor_descuento = 8;break;
		case 3: descuento = subtotal *0.12;
		valor_descuento = 12;break;
		case 4: descuento = subtotal *0.15;
		valor_descuento = 15;break;
		default: cout<<"Esta opcion no existe"<<endl;
	}
	
	if (tipo>0 && tipo<5)
	{
		cout<<nombre<<"\n"<<"subtotal: "<<subtotal<<endl;
		cout<<"El descuento es del "<<valor_descuento<<"%";
		cout<<" Lo que nos da en precio: "<<descuento<<endl;
		total = subtotal - descuento;
		cout<<"El total a pagar es: "<<total<<endl;
	}
	
}
