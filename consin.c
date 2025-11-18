#include <stdio.h> 
#include <stdlib.h>

// Función para limpiar pantalla multiplataforma
void clear_screen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main() {
    int primera_opcion = -1;
    int nhtt = -1;
    int esdrujula = -1;
    int grave = -1;
    int terminacionnsvoc = -1;

    clear_screen();
    
    printf("Hola\n");
    printf("Piensa en una palabra y te diré si se acentúa gráficamente o no.\n");
    printf("Te haré varias preguntas.\n");
    printf("======...\n");
    printf("¿Es una palabra del tipo adverbio terminado en mente o una palabra compuesta separada por guión?\n");
    printf("Presiona \"1\" si la respuesta es \"SÍ\" o \"0\" si la respuesta es \"NO\".\n");
    scanf("%d", &primera_opcion);

    // Limpiar el buffer de entrada después de scanf
    while(getchar() != '\n');

    if (primera_opcion == 1) {
        printf("En estos casos, descomponga la palabra en los dos constituyentes\n");
        printf("y aplique este algoritmo a cada uno de ellos.\n");
        printf("Presiona Enter para continuar...\n");
        getchar();  // Esperar Enter
    }
    else if (primera_opcion == 0) {
        clear_screen();
        printf("Haremos preguntas adicionales\n");
        printf("¿Tiene una \"I\" o \"U\" tónica contigua a una vocal \"A\", \"E\" u \"O\"?\n");
        printf("Presiona 1 para \"SÍ\", 0 para \"NO\": ");
        scanf("%d", &nhtt);
        while(getchar() != '\n');  // Limpiar buffer

        if (nhtt == 1) {
            clear_screen();
            printf("La palabra se escribe con acento en la vocal cerrada tónica!\n");
        }
        else if (nhtt == 0) {
            clear_screen();
            printf("¿Es esdrújula? (1 = SÍ, 0 = NO): ");
            scanf("%d", &esdrujula);
            while(getchar() != '\n');  // Limpiar buffer

            if (esdrujula == 1) {
                clear_screen();
                printf("La palabra se escribe con acento\n");
            }
            else if (esdrujula == 0) {
                clear_screen();
                printf("¿Es grave (1) o aguda (0)?: ");
                scanf("%d", &grave);
                while(getchar() != '\n');  // Limpiar buffer
                
                printf("¿Termina en vocal, N o S no agrupadas? (1 = SÍ, 0 = NO): ");
                scanf("%d", &terminacionnsvoc);
                while(getchar() != '\n');  // Limpiar buffer

                clear_screen(); // Solo un clear_screen

                if (grave == 1) {
                    if (terminacionnsvoc == 0) {
                        printf("La palabra se escribe con acento en la penúltima sílaba\n");
                    } else {
                        printf("La palabra se escribe sin acento\n");
                    }
                }
                else if (grave == 0) {
                    if (terminacionnsvoc == 1) {
                        printf("La palabra se escribe con acento en la última sílaba\n");
                    } else {
                        printf("La palabra se escribe sin acento\n");
                    }
                }
            }
        }
    }

    printf("\nPresiona Enter para salir...");
    getchar();
    return 0;
}