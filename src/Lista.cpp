/*
 * Lista.cpp
 *
 *  Created on: 8 de jun. de 2016
 *      Author: jesus
 */

#include "Lista.h"
#include <cstdlib>
namespace ITLA2 {

	Lista::Lista() : _primer(NULL) , _ultimo(NULL)
	{


	}

	void Lista::agregar(Nodo* nodo) //lista esta vacia
	{
		if(_primer == NULL)
		{
			_primer =nodo;
			_ultimo = nodo;
		}else
		{
			_ultimo -> setSiguiente(nodo);
			_ultimo = nodo;
		}

	}

Nodo* Lista::get(int indice)
{
	int i = 0;
	Nodo* iterador = _primer;
	while(  iterador!=NULL)
	{
		if(i ==indice){

			return iterador;
		}else{

			iterador = iterador ->getSiguiente();
			i++;
		}

	}
	return NULL;

}

bool Lista::agregar(Nodo* nodo, int indice) {
	bool exito = true;
	Nodo* referencia = get(indice);
	if(referencia == NULL){

	return false;
	}
	nodo -> setSiguiente(referencia -> getSiguiente());
	referencia ->setSiguiente(nodo);

	return exito;
}

Lista::~Lista() {
	// TODO Auto-generated destructor stub
}

} /* namespace ITLA2 */
