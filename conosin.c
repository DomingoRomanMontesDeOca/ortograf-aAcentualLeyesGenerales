#include <stdio.h> 
#include <stdlib.h>

int primera_opcion;
int nhtt;
int esdrujula;
int grave;
int terminacionnsvoc;

int main() {
	printf("Hola\n");
	printf("Piensa en una palabra y te diré si se acentúa gráficamente o no.\n");
	printf("Te haré varias preguntas.\n");
	printf("======...\n");
	printf("¿Es una palabra del tipo adverbio terminado en mente o una palabra compuesta separada por guión?\n");
	printf("Presiona 1 si la respuesta es SÍ y 0 si la respuesta es NO\n");
	scanf("%d", &primera_opcion); // & sirve para señalar la dirección de memoria de la variable

	if (primera_opcion == 1) {
		printf("En estos casos, descomponga la palabra en los dos constituyentes\n");
		printf("y aplique este algoritmo a cada uno de ellos.\n");
		printf("Presiona Enter para continuar...\n");
    		getchar();
		printf("Continuando...\n");
	}

	else if (primera_opcion == 0) {
			system("clear");
			printf("Haremos preguntas adicionales\n");
			printf("Lo primero es saber si la palabra tiene una I o una U tónica contigua a una vocal como A E u O.\n");
			printf("Presiona 1 si la respuesta es SI\n");
			printf("Presiona 0 si la respuesta es NO.\n");
			scanf("%d", &nhtt); // & sirve para señalar la dirección de memoria
		

		if (nhtt == 1) {
			printf("La palabra en la que Ud. pensó se escribe con acento en la vocal cerrada tónica.\n");
			printf("Muchas gracias.\n");
		}
			else if (nhtt == 0) {
				printf("Necesito saber si la palabra es esdrújula. Sí = 1. No = 0.\n");
				scanf("%d", &esdrujula);
			}

			if (esdrujula == 1){
				printf("La palabra se escribe con acento en la sílaba tónica.\n");
			}

				else if (esdrujula == 0) {
					printf("Necesito saber si la palabra es grave o aguda.\n");
					printf("Para grave, escriba 1; para aguda, escriba 0.\n");
					scanf("%d", &grave);
					printf("Necesito saber si la última letra de la palabra...\n");
					printf("... es una vocal o una consonante N o S no agrupadas.\n");
					printf("Si la respuesta es SÍ, presione 1.\n");
					printf("Si la respuesta es NO, presione 0.\n");
					scanf("%d", &terminacionnsvoc);
				}

				if (grave == 1 && terminacionnsvoc == 0){
					printf("La palabra se escribe con acento en la penúltima sílaba.\n");
				}

				else if (grave == 1 && terminacionnsvoc == 1) {
					printf("La palabra se escribe sin acento.\n");
				}

				else if (grave == 0 && terminacionnsvoc == 1) {
					printf("La palabra se escribe con acento en la última sílaba.\n");
				}

				else if (grave == 0 && terminacionnsvoc == 0) {
					printf("La palabra se escribe sin acento.\n");
				}

	}

	return 0;
}