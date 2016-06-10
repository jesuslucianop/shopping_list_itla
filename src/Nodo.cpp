/*
 * Nodo.cpp
 *
 *  Created on: 8 de jun. de 2016
 *      Author: jesus
 */

#include "Nodo.h"
#include  <cstdlib>
namespace ITLA2 {

Nodo::Nodo(std::string nombre): _siguiente(NULL), _nombre(nombre)
{


}

Nodo::~Nodo()
{

}

} /* namespace ITLA2 */
