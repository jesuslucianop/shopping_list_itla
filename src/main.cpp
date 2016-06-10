//============================================================================
// Name        : Listas.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Lista.h"
using namespace std;
using namespace ITLA2;

Nodo* cancion1 = new Nodo("1lb de arroz");
Nodo* cancion2 = new Nodo("salami");
Nodo* cancion3 = new Nodo("habichuela");
Nodo* cancion4 = new Nodo("aguacate");
Nodo* cancion5 = new Nodo("persiana de aluminio");
//Nodo* articulo = new Nodo(nombre_articulo);
Lista* lista = new Lista();
void recorrer(string* nombre_articulo){
	Nodo* i = lista -> getPrimer();
	while(i != NULL)
	{
		lista->agregar(nombre_articulo*);
		cout <<  i-> getNombre() << endl;
		i = i -> getSiguiente();

	}



}
int main(string nombre)
{

	cout << "deposite el nombre articulo"<<endl;
	cin >> nombre;

	lista -> agregar(cancion1);
	lista -> agregar(cancion2);
	lista -> agregar(cancion3);
	lista -> agregar(cancion4);
recorrer(nombre);

/*
	Nodo* nodo = lista ->get(5);
	if (nodo != NULL){
		cout << nodo -> getNombre() << endl;

	}else {

		cout << "posiion no encontrada"<<endl;
	}
*/
	cout<<"=======================Antes de insercion=================="<<endl;
	recorrer();
	lista -> agregar();
	cout << "==============================Despues de la insercion================"<<endl;
	recorrer();
	return 0;
}
