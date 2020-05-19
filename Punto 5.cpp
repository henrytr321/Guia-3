	#include <iostream>
	#include <math.h>
	#include <stdio.h>
	#include <string.h>
	using namespace std;
	
	main()
	{
		float numero1,numero2, resultado;
		cout<<"Digite el primer numero para dividir"<<endl;
		cin>>numero1;
		cout<<"Digite el segundo numero para dividir"<<endl;
		cin>>numero2;
		if (numero2 ==0)
		{
			cout<<"El divisor es "<<numero2;
			cout<<" Por lo tanto no se realiza la operacion"<<endl;
		}
		else
		{
			resultado = numero1/numero2;
			cout<<"El resultado es "<<resultado<<endl;
		}
	}

