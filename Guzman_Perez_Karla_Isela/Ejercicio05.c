//5. Crea un arreglo dinámico de estructuras Libro usando Malloc.

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char titulo[50];
    char autor[50];
    int anio;
} Libro;

int main (){    
    Libro *ptrLibro;
    int numeroLibros;

    printf("Indique el numero de libros: ");
    scanf("%d",&numeroLibros);
    ptrLibro = (Libro *) malloc (numeroLibros * sizeof(Libro));
    
    if (ptrLibro == NULL) {
        printf("No se guardo la memoria dinamica\n");
    }

    // Inicializar los libros
    for (int i = 0; i < numeroLibros; i++) {
        printf("Ingrese el titulo del libro %d: ", i + 1);
        scanf("%s", ptrLibro[i].titulo);
        
        printf("Ingrese el autor del libro %d: ", i + 1);
        scanf("%s", ptrLibro[i].autor);
        
        printf("Ingrese el anio de publicacion del libro %d: ", i + 1);
        scanf("%d", &ptrLibro[i].anio);
    }

    // Imprimir los datos de los libros
    printf("\n────୨ৎ────\n");
    printf("[Libros]\n");          
    for (int i = 0; i < numeroLibros; i++) {
        printf("\n");
        printf("Libro %d:\n", i + 1);
        printf("Titulo: %s\n", ptrLibro[i].titulo);
        printf("Autor: %s\n", ptrLibro[i].autor);
        printf("Anio de publicacion: %d\n", ptrLibro[i].anio);
    }
    printf("────୨ৎ────\n");

    // Liberar la memoria asignada
    free(ptrLibro);
    return 0;
}
