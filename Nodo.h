#ifndef NODO_H_
#define NODO_H_

#include<stdlib.h>
#include<stdio.h>

struct Nodo{
	_element e; 
    struct Nodo* der;
    struct Nodo* izq;
};

typedef struct Nodo _nodo;

//_nodo *crearNuevoNodo();

#endif