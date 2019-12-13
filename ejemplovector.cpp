// ejemplovector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#define MAX 100

using namespace std;

void cargar(int vec[],int n);
void mostrar(int vec[],int n);
void unir(int v1[],int n,int v2[],int m,int vec[],int &tam);
void burbuja (int vec[],int m);

void main(){
	int tam,n,m, A[MAX],B[MAX],C[MAX];
	do {
		cout<<"Ingresar el tamaño del primer vector:" ;
		cin>>n;
	} while ((n<=0)||(n>MAX));
	cargar(A,n); // Cargar el primer vector
	do {
		cout<<"Ingresar el tamaño del segundo vector:" ;
		cin>>m;
	} while ((m<=0)||(m>MAX));
	cargar(B,m); // Cargar el segundo vector
	unir(A,n,B,m,C,tam); // Unir los dos vectores en C
	burbuja(C,tam); // Clasificados en orden ascendente
	mostrar(C,tam); // Muestro el vector C
	getch();
}

void cargar(int vec[],int n)
{
	for (int i=0;i<n;i++)
	{
		cout<<"Vector["<<i<<"]= ";
		cin>>vec[i];
	}
}

void mostrar(int vec[],int n)
{
	for (int i=0;i<n;i++)
		cout<<"Vector["<<i<<"]= "<<vec[i]<<endl;
}

void unir(int v1[],int n,int v2[],int m,int vec[],int &tam)
{
	for (int i=0;i<n;i++)  // Copio el primer vector v1
		vec[i]=v1[i];
	for (int i=0;i<m;i++) // Copio el segundo vector v2
		vec[i+n]=v2[i];
	tam=n+m;
}

void burbuja (int vec[],int m)
{
	int aux;
	for (int i=0;i<m-1;i++)
	{
		for (int j=i+1;j<m;j++)
			if (vec[i]>vec[j])
			{
				aux=vec[j];
				vec[j]=vec[i];
				vec[i]=aux;
			}
	}	
}			
			

