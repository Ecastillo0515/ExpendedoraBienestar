#include<iostream>
#include<conio.h>
#include<locale.h>
#include "Maquina Dispensadora.h"
using namespace std;

Maquina::Maquina(){
}

void Maquina::encender(){
	interruptor=true;
}

void Maquina::mostrarInfo(){
	cout<<"\t Expendedora Bienestar"<<endl;
	cout<<"1- Pepsi (1L) \t Costo: $15"<<endl;
	cout<<"2- CocaCola (1L) \tCosto: $20"<<endl;
	cout<<"3- Fanta (1L) \t Costo: $15"<<endl;
	cout<<"4- Sabritas \t Costo: $10"<<endl;
	cout<<"5- Chetos \t Costo: $8"<<endl;
	cout<<"6- Takis \t Costo: $8"<<endl;
}

void Maquina::leerProducto(){
	cout<<"\n Selecciona producto: ";
	cin>>teclado;
	cout<<endl;
	switch(teclado){
		case 1: cout<<"Se ha seleccionado Pepsi (1L)"<<endl;
		costo=15; break;
		case 2: cout<<"Se ha seleccionado CocaCola (1L)"<<endl;
		costo=20; break;
		case 3: cout<<"Se ha seleccionado Fanta (1L)"<<endl;
		costo=15; break;
		case 4: 	cout<<"Ha seleccionado Sabritas"<<endl;
		costo=10; break;
		case 5: cout<<"Ha seleccionado Chetos"<<endl;
		costo=8; break;
		case 6: cout<<"Ha seleccionado Takis"<<endl;
		costo=8; break;
		default: cout<<"Opcion incorrecta"<<endl;
		teclado=0; break;
	}
}

void Maquina::leerDinero(){
	if(teclado!=0){
		cout<<"\n Deposite dinero: ";
		cin>>dineroDepositado;
		if(dineroDepositado>=costo){
			cout<<"Confirmado"<<endl;
		}else{
			cout<<"\t Dinero insuficiente"<<endl;
		}
	}
}

void Maquina::regresarCambio(){
	if(teclado!=0){
		if(dineroDepositado>=costo){
			cambio=dineroDepositado-costo;
			cout<<"Cambio: $"<<cambio<<endl;
		}
	}
}

void Maquina::bajarProducto(){
	if(teclado!=0){
		cout<<"Bajando produto"<<endl;
	}
}

void Maquina::apagar(){
	interruptor=false;
}

void Maquina::mensaje(){
	if(teclado!=0){
		cout<<"Gracias por su compra"<<endl;
	}
}

int main(){
	Maquina m;
	m.encender();
	m.mostrarInfo();
	m.leerProducto();
	m.leerDinero();
	m.regresarCambio();
	m.bajarProducto();
	m.mensaje();
	system("pause");
	return 0;
}
