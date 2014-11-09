#include "Nodo.h"
#include <stdlib.h>

_nodo *crearNuevoNodo(){

	_nodo *nuevoNodo = (_nodo *)malloc (sizeof(_nodo));

	return nuevoNodo;
}