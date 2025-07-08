#include<iostream>

using namespace std;




int cuadrado(int);


int main(){
	int a[10], rta, i;
	
	for(int i=1;i=10;i++){
		cout<<"\nIntento -->"<<i;
		cout<<"\ningresa el numero :";cin>>a[i];
		rta = cuadrado(a[i]);
		cout<<"Respuesta-->"<<rta;cout<<"\n";
		
	}
	
	
	return 0;
}

int cuadrado(int x){
	int y;
	y=x*x;
	return y;
}
