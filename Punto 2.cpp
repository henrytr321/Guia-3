#include <iostream>
#include <math.h>
#include <string.h>
#include <stdio.h>
using namespace std;

main ()
{
	int numero,i,cont=0;
	cout<<"Digite un numero"<<endl;
	cin>>numero;
	
	for (i=1;i<=numero;i++)
	{
		if(numero%i==0)
		{
			cont++;
		}
	}
	if(cont>2)
	{
		cout<<"El numero es compuesto"<<endl;	
	}
	else
	{	
		cout<<"El numero es primo"<<endl;
	}
	
	return 0 ;
}
