#ifndef LISTAACTIVIDADES_H
#define LISTAACTIVIDADES_H

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class ListaActividades
{
	public:
		ListaActividades();
		
		void insertar(string);
		bool isvacia();
		void imprimir();
		
	private:
		struct Nodo{
		
		string Actividad;
		Nodo *sig=NULL;
		Nodo *ant=NULL;
		};
		
		
		Nodo *inicio;
		int tamanio;
};

#endif
