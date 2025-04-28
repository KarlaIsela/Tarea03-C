// Crea un sistema que gestiones un catálogo de libros en una biblioteca, donde los libros
// puedan añadirse o eliminarse dinámicamente durante la ejecución.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    char titulo[50];
    char autor[50];
    int anio;
    bool disponible;
} Libro;

void agregarLibro(Libro **catalogo, int *numeroLibros) {
    *catalogo = realloc(*catalogo, (*numeroLibros + 1) * sizeof(Libro));

    if (*catalogo == NULL) {
        printf("Error al asignar memoria.\n");
        return;
    }
    printf("[AGREGANDO LIBROS...]\n");

    printf("\n────୨ৎ────\n");
    printf("Ingrese el titulo del libro: ");
    getchar();
    fgets((*catalogo)[*numeroLibros].titulo, sizeof((*catalogo)[*numeroLibros].titulo), stdin);

    printf("\n────୨ৎ────\n");
    printf("Ingrese el autor del libro: ");
    fgets((*catalogo)[*numeroLibros].autor, sizeof((*catalogo)[*numeroLibros].autor), stdin);
    
    printf("\n────୨ৎ────\n");
    printf("Ingrese el anio de publicacion del libro: ");
    scanf("%d", &(*catalogo)[*numeroLibros].anio);
    
    (*catalogo)[*numeroLibros].disponible = true;
    (*numeroLibros)++;
}

void eliminarLibro(Libro **catalogo, int *numeroLibros) {
    int op;
    if (*numeroLibros == 0) {
        printf("୨ৎ No hay libros para eliminar. ୨ৎ\n");
        return;
    }
    printf("[ELIMINANDO LIBROS...]\n");

    printf("\n────୨ৎ────\n");
    printf("[Libros Disponibles]\n");
    for (int i = 0; i < *numeroLibros; i++) {
        printf("%d) %s\n", i + 1, (*catalogo)[i].titulo);
    }

    printf("Ingrese el número del libro que desea eliminar: ");
    scanf("%d", &op); 

    op--;

    if (op < 0 || op >= *numeroLibros) {
        printf("No existe ese libro :(\n");
        return;
    }

    printf("Eliminando el libro: %s\n", (*catalogo)[op].titulo);

    // Mover los libros siguientes
    for (int i = op; i < *numeroLibros - 1; i++) {
        (*catalogo)[i] = (*catalogo)[i + 1];
    }

    (*numeroLibros)--;

    if (*numeroLibros == 0) {
        free(*catalogo);
        *catalogo = NULL;
        return;
    }

    Libro *nuevoCatalogo = realloc(*catalogo, (*numeroLibros) * sizeof(Libro));
    if (nuevoCatalogo != NULL) {
        *catalogo = nuevoCatalogo;
    } else {
        printf("Advertencia: No se pudo reducir el tamaño de la memoria.\n");
    }
}

void mostrarCatalogo(Libro *catalogo, int numeroLibros) {
    printf("\n────୨ৎ────\n");
    printf("[CATALOGO DE LIBROS]\n");
    
    for (int i = 0; i < numeroLibros; i++) {
        printf("\n");
        printf("[Libro %d]\n", i + 1);
        printf("- Titulo: %s", catalogo[i].titulo);
        printf("- Autor: %s", catalogo[i].autor);
        printf("- Anio de publicacion: %d\n", catalogo[i].anio);
        printf("- Disponible: %s\n", catalogo[i].disponible ? "Si" : "No");
    }
    printf("────୨ৎ────\n");
}

int main() {
    Libro *catalogo = NULL;
    int numeroLibros = 0;
    int opcion;

    do {
        printf("\n────༄˖°.☕️.ೃ࿔📚*:･────\n");
        printf("Bienvenido al sistema de gestion de catalogo de libros\n"); 
    
        printf("1. Agregar libro\n");
        printf("2. Eliminar libro\n");
        printf("3. Mostrar catalogo\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                agregarLibro(&catalogo, &numeroLibros);
                break;
            case 2:
                eliminarLibro(&catalogo, &numeroLibros);
                break;
            case 3:
                mostrarCatalogo(catalogo, numeroLibros);
                break;
            case 4:
                printf("Vuelve pronto <3...\n");
                break;
            default:
                printf("Opcion invalida :(\n");
        }
    } while (opcion != 4);

    // Liberar la memoria asignada
    free(catalogo);
    return 0;
}
