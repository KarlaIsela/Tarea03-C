//1. Usa un apuntador para modificar los datos de una estructura Coche.

#include <stdio.h>
#include <string.h>


typedef struct {
    char marca[20];
    char modelo[20];
    int anio;
    float precio;
} Coche;

int main() {
    Coche coche1;
    Coche *ptrCoche;

    // Asignar la dirección de coche1 a ptrCoche.
    ptrCoche = &coche1;

    
    // Inicializar el coche.
    strcpy(coche1.marca, "Toyota");
    strcpy(coche1.modelo, "Corolla");       
    coche1.anio = 2020;
    coche1.precio = 20000.0;

    // Imprimir los datos del coche original.
    printf("────୨ৎ────\n");
    printf("[Coche original]\n");
    printf("Marca: %s\n", coche1.marca);
    printf("Modelo: %s\n", coche1.modelo);
    printf("Año: %d\n", coche1.anio);
    printf("Precio: $ %.2f\n", coche1.precio);
    printf("────୨ৎ────\n");

    printf("\n"); 

    // Modificar los datos del coche usando el puntero.
    strcpy(ptrCoche->marca, "Honda");
    strcpy(ptrCoche->modelo, "Civic");
    ptrCoche->anio = 2021;
    ptrCoche->precio = 22000.0;

    // Imprimir los datos del coche modificado.
    printf("────୨ৎ────\n");
    printf("[Coche modificado]\n");        
    printf("Marca: %s\n", ptrCoche->marca);
    printf("Modelo: %s\n", ptrCoche->modelo);
    printf("Año: %d\n", ptrCoche->anio);
    printf("Precio: $ %.2f\n", ptrCoche->precio);
    printf("────୨ৎ────\n");    
    
    return 0;
}

