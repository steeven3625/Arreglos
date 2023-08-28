#include<iostream>
#include<conio.h>

using namespace std;
int main (){
	char abecedario[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o'};
	int inf,sup,mitad;
	char letra;
	char band ='F';
	cout<<"Juan desea saber cual es la posicion de las primeras 15 letras del abecedario en numeros, ¿podras ayudar a Juan?\n "<<endl;
			for (int i=0; i<15; i++)
{
	cout<<"["<<abecedario[i]<<"]";
}
cout<<"\n\n¿Que letra desea encontrar?: ";cin>>letra;
	inf=0;
	sup=15;
	while (inf <= sup){
		mitad = (inf+sup)/2;
		if (abecedario[mitad]== letra){
			band = 'V';
			break;
		}
		if (abecedario[mitad]>letra){
			sup = mitad;
			mitad =(inf+sup)/2;
		}
		if(abecedario[mitad]< letra){
			inf=mitad;
			mitad =(inf+sup)/2;
		}
	}
	if (band =='V'){
		cout<<"La letra encontrada esta en la posicion: "<<mitad<<endl;
	}else{
		cout<<"La letra no fue encontrada";
	}

	return 0;
}

