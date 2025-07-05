#include<iostream>

using namespace std;
int main(){
	long sueldo_base=0, venta_1=0, venta_2=0, venta_3=0, comisiones=0, sueldo_total=0;
	cout<<"-----------------------Calcular sueldo. -----------------------\n";
	cout<<"\tIngresa el sueldo base :";cin>>sueldo_base;cout<<"\n";
	cout<<"\tIngresa el valor de la venta 1 :";cin>>venta_1;cout<<"\n";
	cout<<"\tIngresa el valor de la venta 2 :";cin>>venta_2;cout<<"\n";
	cout<<"\tIngresa el valor de la venta 4 :";cin>>venta_3;cout<<"\n";
	
	comisiones=(venta_1*0.10)+(venta_2*0.10)+(venta_3*0.10);
	sueldo_total=comisiones+sueldo_base;
	system("cls");
	cout<<"Valor de comisiones :"<<comisiones;cout<<"\n";
	cout<<"Sueldo total este mes :"<<sueldo_total;
	
	return 0;
}