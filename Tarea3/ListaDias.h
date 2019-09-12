#ifndef LISTADIAS_H
#define LISTADIAS_H
#include <iostream>
#include <stdlib.h>
#include <string>
#include "ListaActividades.h"

using namespace std;

class ListaDias
{
	public:
		ListaDias();
		
		bool isVacia();
		void insertardia(int,string);
		void imprimirtodo();
		void imprimirdia(int);
		
	private:
		struct Nodo
		{
			int dia;
			string nom_dia;
			Nodo *sig = NULL;
			ListaActividades actividad;
		};
		
		Nodo *cabeza;
		int tamanio;
};

#endif
