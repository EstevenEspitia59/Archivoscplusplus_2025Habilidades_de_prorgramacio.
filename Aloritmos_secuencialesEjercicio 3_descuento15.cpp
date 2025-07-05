#include<iostream>

using namespace std;
int main(){
	double total_compra=0, total_pagar_descuento=0,descuento=0;
	
	do{
		cout<<"Ingrese el total de la compra :";cin>>total_compra;
		if(total_compra<0){
			cout<<"Ingresa valores positivos.";
		}else if(total_compra==0){
			cout<<"compra inexistente.";
		}
	}while(total_compra<0||total_compra==0);
	
	descuento=total_compra*0.15;
	total_pagar_descuento=total_compra-descuento;
	cout<<"Tu compra sin descuento es:"<<total_compra<<"\n";
	cout<<"Descuento de \"15%\" es "<< descuento;cout<<"\n";
	cout<<"Total a pagar :"<<total_pagar_descuento;
	
	
	return 0;
}