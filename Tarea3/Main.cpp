
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "ListaDias.h";
using namespace std;

int main()
{
	ListaDias listadias;
	int sdia=0;
	string actividad;
	bool continuar = true;
	int a=0;
	do
	{
		system("cls");
		cout << "***** Ingrese Numero de Opcion Requerida*****\n";
		cout << "Agregar actividad..............1 \n";
		cout << "Mostrar actividades............2 \n";
		cout << "Mostrar actividades por dia....3 \n";
		cout << "Salir..........................4 \n";
		cin >> a;
		switch (a)
		{
		case 1:
			system("cls");
			cout << "***** Ingrese Numero de Dia para Seleccionarlo*****\n";
			cout << "Lunes............1 \n ";
			cout << "Martes...........2 \n ";
			cout << "Miercoles........3 \n ";
			cout << "Jueves...........4 \n ";
			cout << "Viernes..........5 \n ";
			cout << "Sabado...........6 \n ";
			cout << "Domingo..........7 \n ";
			cin >> sdia;
			cout << "\n";
			cout << "Escriba actividad a ingresar \n";
			cin >> actividad;
			listadias.insertardia(sdia, actividad);
			_getch();
			break;
		case 2: 
			system("cls");
			listadias.imprimirtodo();
			_getch();
			break;
		case 3:
			system("cls");
			cout << "\n***** Ingrese Numero de Dia para Seleccionarlo*****\n";
			cout << "Lunes............1 \n ";
			cout << "Martes...........2 \n ";
			cout << "Miercoles........3 \n ";
			cout << "Jueves...........4 \n ";
			cout << "Viernes..........5 \n ";
			cout << "Sabado...........6 \n ";
			cout << "Domingo..........7 \n ";
			cin >> sdia;
			listadias.imprimirdia(sdia);
			_getch();
			break;
		default:
			continuar = false;
			break;
		}
	} while (continuar);
}
