#include<iostream>
#include<conio.h>
#include<locale.h>
#include "Maquina Dispensadora.h"
using namespace std;

Maquina::Maquina(){
}

bool Maquina::encender(){
	cout<<"Encendiendo...";
	interruptor=true;
	return interruptor;
}

void Maquina::mostrarInfo(){
	cout<<"\n\tExpendedora Bienestar"<<endl;
	cout<<"1- Pepsi(1L) Costo: $15"<<endl;
	cout<<"2- CocaCola(1L) Costo: $20"<<endl;
	cout<<"3- Fanta(1L) Costo: $15"<<endl;
	cout<<"4- Sabritas Costo: $10"<<endl;
	cout<<"5- Chetos Costo: $8"<<endl;
	cout<<"6- Takis Costo: $8"<<endl;
}

int Maquina::leerProducto(){
	cout<<"\nSelecciona producto: ";
	cin>>teclado;
	if(teclado==1){
		cout<<"Selecciono Pepsi(1L)"<<endl;
		costo=15;
	}
	else if(teclado==2){
		cout<<"Selecciono CocaCola(1L)"<<endl;
		costo=20;
	}
	else if(teclado==3){
		cout<<"Selecciono Fanta(1L)"<<endl;
		costo=15;
	}
	else if(teclado==4){
		cout<<"Selecciono Sabritas"<<endl;
		costo=10;
	}
	else if(teclado==5){
		cout<<"Selecciono Chetos"<<endl;
		costo=8;
	}
	else if(teclado==6){
		cout<<"Selecciono Takis"<<endl;
		costo=8;
	}
	else{
		cout<<"Opcion incorrecta"<<endl;
		teclado=0;
	}
	return teclado;
}

int Maquina::leerDinero(){
	cout<<"\nDeposite dinero: ";
	cin>>dineroDepositado;
	if(dineroDepositado>=costo){
		cout<<"Confirmado"<<endl;
	}else{
		cout<<"Dinero insuficiente"<<endl;
		teclado=0;
	}
	return teclado;
}

void Maquina::regresarCambio(){
	if(dineroDepositado>=costo){
		cambio=dineroDepositado-costo;
		cout<<"Cambio: $"<<cambio<<endl;
	}
}

void Maquina::bajarProducto(){
	cout<<"Bajando produto"<<endl;
}

bool Maquina::apagar(){
	interruptor=false;
	return interruptor;
}

void Maquina::mensaje(){
	cout<<"Gracias por su compra"<<endl;
}

int main(){
	Maquina m=Maquina();
	m.encender();
	do{
		m.mostrarInfo(); //Bien
		if(m.leerProducto()!=0){ //Bien
			if(m.leerDinero()!=0){
				m.regresarCambio();
				m.bajarProducto();
				m.mensaje();
			}
		}	                       	
	}while(m.apagar()==false);
	
	
	
	system("pause");
	return 0;
}
