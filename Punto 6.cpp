	#include <iostream>
	#include <math.h>
	#include <stdio.h>
	#include <string.h>
	using namespace std;
	
	main()
	{
		 int nota,mayor,i;
		 for(i=1;i<=3;i++)
		 {
		 	cout<<"Digite la nota"<<endl;
		 	cin>>nota;
		 	if (nota>mayor)
		 	{
		 		mayor=nota;	
			}
		 }
		 cout<<"La nota mas alta es "<<mayor<<endl;
	}
