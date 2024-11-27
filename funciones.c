//Funciones.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//
void menu()
{
	printf("1.Ver tableros de loteria de jugadores\n"
		"2.Tirar carta\n"
		"3.Salir\n");
		
}
void imprimir_matriz(int (*jugador1)[4], int (*jugador2)[4])
{
	printf("Jugador 1:\n");
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			printf("|%d|",jugador1[i][j]);
		}
	printf("\n");
	}
	
	printf("\nJugador 2:\n");
	for(int x=0; x<4; x++)
	{
		for(int y=0; y<4; y++)
		{
			printf("|%d|", jugador2[x][y]);
		}
	printf("\n");
	}
}
int Verificar_espacio(int(*jugador)[4])
{
	for(int i=0; i<4; i++)
	{
		for(int j = 0; j<4; j++)
		{
			if(jugador[i][j] == 0)
			{
				return 1; //hay espacio en alguna celda
			}
		}
	}
	return 0; //no hay espacio en ninguna celda
}
void Llenar1(int (*jugador1)[4])
{
	int row;
	int column;
	if(!Verificar_espacio(jugador1))
		return;
	
	do{
		row= rand() % 5;    			 //Generación de coordenadas para llenar en la tabla
		column = rand() % 5;		
	}while(jugador1[row][column] != 0);		 //Se repite hasta encontrar una celda vacia	
	jugador1[row][column] = 1;				//Se cambia el estado de la celda 
}

void Llenar2(int(*jugador2)[4])
{
	
	int row;
	int column;
	if(!Verificar_espacio(jugador2))
		return;
	
	do{
		row= rand() % 5;     //Generación de coordenadas para llenar en la tabla
		column = rand() % 5;		
	}while(jugador2[row][column] != 0); //Se repite hasta encontrar una celda vacia	
	jugador2[row][column] = 1;	//Se cambia el estado de la celda 
}
int Aleatorio()
{
	return rand () % 40+1;
}

