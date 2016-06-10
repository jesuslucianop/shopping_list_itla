/*
 * Nodo.h
 *
 *  Created on: 8 de jun. de 2016
 *      Author: jesus
 */

#ifndef NODO_H_
#define NODO_H_
#include <string>
namespace ITLA2 {

	class Nodo
	{
	private:
		Nodo* _siguiente;
		std::string _nombre;

	public:
		Nodo* getSiguiente(){return _siguiente;}
		void setSiguiente(Nodo* nodo){_siguiente = nodo;}
		std::string getNombre(){return _nombre;}
		Nodo(std::string nombre);
		virtual ~Nodo();
	};

	} /* namespace ITLA2 */

#endif /* NODO_H_ */
