#include<iostream>
#include<stdlib.h>
#include <string>
using namespace std;

class nodo{
public:
    int codigo;
	int stock;
	int stock_min;
	string cod_prov;                            
    nodo *sgt;
	
	nodo(){
		codigo=0;
		stock=0;
		stock_min=0;
		sgt=0;
		cod_prov="";
	}
	                 
};

class lista{
public:
	
	nodo *cabeza = 0;
	
	
	
	bool esVacia(){
		return cabeza == NULL;
	}
	
	void agregar(int cod, int stock, int stock_min, string cod_prov){
		
		
		nodo *temp= new nodo();
		
		temp->codigo = cod;
		temp->stock= stock;
		temp->stock_min = stock_min;
		temp->cod_prov = cod_prov;
		
		bool encontrado = false;
		nodo *ant=NULL;
		nodo *act=cabeza;
		
		while(encontrado==false && act!=NULL){
			if(temp->codigo <= act->codigo){
				encontrado=true;
			}else{
				ant= act;
				act= act->sgt;
			}			
		}
		
		
		if( esVacia()==true){
			cabeza = temp;
		}else{
			if(encontrado== true){
				if(act==cabeza){
					temp->sgt = cabeza;
					cabeza=temp;
				}else{
					ant->sgt = temp;
					temp->sgt = act;
				}
			}else{
				ant->sgt = temp;
			}
			
		}	
	}
	
	
	void imprimir(){
	
	
		if( esVacia()){
			cout<<"Lista vacia";
		}else{
			
			nodo *temp= new nodo();
			temp= cabeza;
			
			while(temp!= NULL){
				cout<<"Codigo:"<< temp->codigo<<" stock:"<<temp->stock<<" stock minimo: "<<temp->stock_min<<"\n";
				temp = temp->sgt ;
			}
		}
	}
	
	lista *copiar(){
		
		lista *l= new lista();
		
		if(esVacia()==false){
			nodo *act= cabeza;
			while(act!=NULL){
				if(act->stock < act->stock_min){
					l->agregar(act->codigo, act->stock, act->stock_min, act->cod_prov);					
				}
				act= act->sgt;
			}
		}
		return l;
	}
	
	void eliminar(int cod){
		
		if( esVacia()==false){
			
			bool encontrado = false;
			nodo *ant=0;
			nodo *act=cabeza;
		
			while(encontrado==false && act!=0){
				if(act->codigo > cod){
					encontrado=true;
				}else{
					ant= act;
					act= act->sgt;
				}			
			}
			
			if(encontrado==true){
				if(esVacia()){
					cabeza=0;
				}else{
					ant->sgt =0;
				}
			}
				
			
			while(act!=0){
				ant= act;
				act= act->sgt;
				free(ant);
			}
			
			
		}
	}
	
	
	
	
	
};



main(){
	
	lista *prueba = new lista();
	
	prueba->agregar(20,25,6,"cod1");
	prueba->agregar(10,18,50,"cod2");
	prueba->agregar(100,15,20,"cod3");
	prueba->agregar(160,12,10,"cod4");
	prueba->agregar(150,5,35,"cod5");
	
	cout<<"----------Lista Productos Original \n";
	
	prueba->imprimir();
	
	prueba->eliminar(100);
	
	cout<<"\n ----------Lista Productos Eliminados codigos mayores a 100  \n";
	
	prueba->imprimir();
	
	lista *copia= prueba->copiar();
	
	cout<<"\n ----------Lista Prod. stock inferior al stock mínimo\n";
	
	copia->imprimir();
	
		
    
    system("pause>>null");
}

