#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"
int main()
{
	int jugador1[4][4] = {0}; //Inicializar tablas de loteria en 0's
	int jugador2[4][4] = {0};
	int opcion = 0;
	int l=0;
	while(opcion != 3)
	{	
		menu();
		printf("Opción:");
		scanf("%d", &opcion);
		switch(opcion)
		{
			case 1:
			imprimir_matriz(jugador1,jugador2); //Empieza imprimiendo la partida
			break;
			
			case 2:
					
				srand(time(NULL));
				l = Aleatorio();
				if(l % 2 == 0)
				{
					printf("Número generado %d\n",l);
					printf("El número es par. Jugador 1 Marca casilla\n");
					Llenar1(jugador1);
				}
				else
				{
		
					printf("Número generado %d\n",l);
					printf("El número es impar, Jugador 2 Marca casilla\n");
					Llenar2(jugador2);
				}
				
				if(!Verificar_espacio(jugador1))
				{
					printf("Jugador 1: LOTERIAAAAAA!!!\n");
					opcion = 3;
					imprimir_matriz(jugador1,jugador2); //Empieza imprimiendo la partida
				}
				else if(!Verificar_espacio(jugador2))
				{
					printf("Jugador 2: LOTERIAAAAAA!!!\n");
					opcion = 3;
					imprimir_matriz(jugador1,jugador2); //Empieza imprimiendo la partida
				}
			break;
			case 3:
   			break;
			default:
				printf("Opción no Válida\n");
			break;	
		}
	}
	return 0;
}
