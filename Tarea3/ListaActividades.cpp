#include "ListaActividades.h"
#include <iostream>
#include <stdlib.h>
#include <string>

ListaActividades::ListaActividades()
{
	inicio = NULL;
	tamanio = 0;
}

void ListaActividades::insertar(string actividad)
{
	struct Nodo *nuevo =new Nodo();
	nuevo->Actividad= actividad;
	
	if(isvacia()){
		inicio= nuevo;
		cout<< "Actividad: " << inicio->Actividad<< " ingresada";
	}
	else{
		Nodo *temp = inicio;
		
		while(temp->sig !=NULL){					
			temp= temp->sig;			

		}
		temp->sig = nuevo;
		nuevo->ant= temp;	
		cout<< "Actividad: " << nuevo->Actividad<< " ingresada";		
	}
	
}

bool ListaActividades::isvacia(){
	return inicio ==NULL;
}

void ListaActividades::imprimir(){
	Nodo *temp= inicio;
	while(temp!=NULL){
		cout<< "\t"<< temp->Actividad<< "\n";
		temp= temp->sig;
	}
}



