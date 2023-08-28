#include<iostream>
#include<conio.h>

using namespace std;
int main (){
	int edades[] = {11,12,15,19,20,34,36,40,57,59,60,71,85,86,90};
	int inf,sup,mitad,numero,a;
	char band ='F';
	cout<<"Se hizo un estudio a personas de todas las edades, acerca de cuanto tiempo\n escuchan musica al dia y las edades que mas escuchaban musica fueron las siguientes: \n\n";		for (int i=0; i<15; i++)
{
	cout<<"["<<edades[i]<<"]";
}
cout<<"\n\n¿Que edad desea encontrar su posicion?: ";cin>>numero;
	inf=0;
	sup=15;
	while (inf <= sup){
		mitad = (inf+sup)/2;
		if (edades[mitad]== numero){
			band = 'V';
			break;
		}
		if (edades[mitad]>numero){
			sup = mitad;
			mitad =(inf+sup)/2;
		}
		if(edades[mitad]< numero){
			inf=mitad;
			mitad =(inf+sup)/2;
		}
	}
	if (band =='V'){
		cout<<"La edad encontrada esta en la posicion: "<<mitad<<endl;
	}else{
		cout<<"La edad no fue encontrada";
	}

	return 0;
}


