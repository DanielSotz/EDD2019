#include "ListaDias.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

ListaDias::ListaDias()
{
	cabeza = NULL;
	tamanio=0;
}


bool ListaDias::isVacia()
{
	return cabeza==NULL;
}

void ListaDias::insertardia(int dia, string valor)
{
	Nodo *temp= cabeza;
	
	while(temp!=NULL)
	{
		if(temp->dia==dia)
		{
			temp->actividad.insertar(valor);
			return;
		}
		temp =temp->sig;
	}
	
	Nodo *nuevo= new Nodo();
	nuevo->dia=dia;
	nuevo->actividad.insertar(valor);
	
	switch(dia)
	{
		case 1:
			nuevo->nom_dia = "Lunes";
			break;
		
		case 2:
			nuevo->nom_dia = "Martes";
			break;
		
		case 3:
			nuevo->nom_dia = "Miercoles";
			break;
			
		case 4:
			nuevo->nom_dia = "Jueves";
			break;
		
		case 5:
			nuevo->nom_dia = "Viernes";
			break;
			
		case 6:
			nuevo->nom_dia = "Sabado";
			break;
			
		case 7:
			nuevo->nom_dia = "Domingo";
			break;
			
		default:
			break;			
	}
	
	if (isVacia())
	{
		cabeza=nuevo;
	}
	else
	{
		if (cabeza->dia>dia)
		{
			nuevo->sig = cabeza;
			cabeza = nuevo;
		}
		else
		{
			Nodo *temp = cabeza;
			while(temp->sig != NULL && temp->sig->dia < dia)
			{
				temp = temp->sig;
			}
			nuevo->sig = temp->sig;
			temp->sig = nuevo;
		}
	}
	
}

void ListaDias::imprimirtodo()
{
	Nodo *temp=cabeza;
	while(temp!= NULL)
	{
		cout<< temp->nom_dia << "\n";
		temp->actividad.imprimir();
		temp = temp->sig;
	}
}

void ListaDias::imprimirdia(int dia)
{
	Nodo *temp = cabeza;
	while (temp !=NULL)
	{
		if(temp->dia ==dia)
		{
			cout<< temp->nom_dia << "\n";
			temp->actividad.imprimir();
		}
		temp = temp->sig;
	}
}




















