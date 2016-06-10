/*
 * Lista.h
 *
 *  Created on: 8 de jun. de 2016
 *      Author: jesus
 */

#ifndef LISTA_H_
#define LISTA_H_
#include "Nodo.h"
namespace ITLA2
{

	class Lista
	{
	private:
		Nodo* _primer;
		Nodo* _ultimo;
	public:
		Nodo* get(int indice);
		void agregar(Nodo* nodo);
		bool agregar(Nodo* nodo, int indice);
		Lista();
		virtual ~Lista();

	Nodo* getPrimer() {return _primer;}
};

	}

#endif /* LISTA_H_ */
