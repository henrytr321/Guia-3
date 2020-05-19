#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

main()
{
	float numero;
	int numveces=1,factorial=1,i;
	cout<<"Digite hasta que numero se saca el factorial"<<endl;
	cin>>i;
		while(numveces<=numero)
		{
			factorial=factorial*numveces;
			numveces=numveces+1;
		}
		cout<<"El factorial del "<<numero<<" es "<<factorial<<endl;
}
