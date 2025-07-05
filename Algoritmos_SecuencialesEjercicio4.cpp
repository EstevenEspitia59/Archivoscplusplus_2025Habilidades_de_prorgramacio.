#include<iostream>

using namespace std;

int main(){
	double calificacio_1=0, calificacio_2=0, calificacio_3=0, examen_final=0, trabajo_final=0, calificacion_final=0;
	
	cout<<"Ingresa la calificacion 1 :"; cin>>calificacio_1;cout<<"\n";
	cout<<"Ingresa la calificacion 2 :"; cin>>calificacio_2;cout<<"\n";
	cout<<"Ingresa la calificacion 3 :"; cin>>calificacio_3;cout<<"\n";
	cout<<"Ingresa la calificacion examen final :"; cin>>examen_final;cout<<"\n";
	cout<<"Ingresa la calificacion trabajo_final :"; cin>>trabajo_final;cout<<"\n";
	calificacion_final=((calificacio_1+calificacio_2+calificacio_3)/3)*0.55+examen_final*0.30+trabajo_final*0.15;
	cout<<"Tu calificacion final es :"<<calificacion_final;
	
	
	
	return 0;
}