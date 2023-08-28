#include<iostream>
#include<conio.h>

using namespace std;
int main (){
	float estatura[] = {1.69,1.70,1.72,1.73,1.75,1.79,1.80,1.82,1.85,1.89,1.90,1.91,1.95,1.96,2.0};
	float inf,sup,numero;
	int mitad;
	char band ='F';
		cout<<"En un salon de 15 estudiantes de universidad, se hizo una recoleccion de datos de la estatura de los estudiantes y\n todas las estaturas son diferentes. "<<endl;
			for (int i=0; i<15; i++)
{
	cout<<"["<<estatura[i]<<"]"<<endl;
}
cout<<"¿Que estatura desea encontrar?: ";cin>>numero;
	inf=0;
	sup=15;
	while (inf <= sup){
		mitad = (inf+sup)/2;
		if (estatura[mitad]== numero){
			band = 'V';
			break;
		}
		if (estatura[mitad]>numero){
			sup = mitad;
			mitad =(inf+sup)/2;
		}
		if(estatura[mitad]< numero){
			inf=mitad;
			mitad =(inf+sup)/2;
		}
	}
	if (band =='V'){
		cout<<"La estatura encontrada esta en la posicion: "<<mitad<<endl;
	}else{
		cout<<"La estatura no fue encontrada";
	}

	return 0;
}

