#include<iostream>

using namespace std;

int main(){
	double inversion_socio1=0,inversion_socio2=0,inversion_socio3=0, suma_socios=0, percent_1=0,percent_2=0,percent_3=0;
	cout<<"---------Inversion empresa---------\n";
	do{
		cout<<"Ingresa la cantidad a invertir \"socio 1\" :"; cin>>inversion_socio1;
		if(inversion_socio1<=0){
			cout<<"Numero negativo o cero\n";
		}else{
			cout<<"Guardado...\n";
		}
	}while(inversion_socio1<=0);
	do{
		cout<<"Ingresa la cantidad a invertir \"socio 2\" :"; cin>>inversion_socio2;
		if(inversion_socio2<=0){
			cout<<"Numero negativo o cero\n";
		}else{
			cout<<"Guardado...\n";
		}
	}while(inversion_socio2<=0);
	
	do{
		cout<<"Ingresa la cantidad a invertir \"socio 3\" :"; cin>>inversion_socio3;
		if(inversion_socio3<=0){
			cout<<"Numero negativo o cero\n";
		}else{
			cout<<"Guardado...\n";
		}
	}while(inversion_socio3<=0);
	suma_socios=inversion_socio1+inversion_socio2+inversion_socio3;
	percent_1=(inversion_socio1*100)/suma_socios;
	percent_2=(inversion_socio2*100)/suma_socios;
	percent_3=(inversion_socio3*100)/suma_socios;
	cout<<"\nInversion en porcentaje de los socios.\n";
	cout<<"inversion socio \"1\" :"<<percent_1;cout<<"%";
	cout<<"\ninversion socio \"2\" :"<<percent_2;cout<<"%";
	cout<<"\ninversion socio \"3\" :"<<percent_3;cout<<"%";
	
	
	return 0;
}