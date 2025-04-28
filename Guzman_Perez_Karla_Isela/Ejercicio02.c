//2. Crea un arreglo de estructuras Producto (nombre, precio, cantidad) y calcula el valor total de inventario.

#include <stdio.h>
#include <string.h> 

typedef struct {
    char nombre[20];
    float precio;
    int cantidad;
} Producto; 

int main() {
    Producto inventario[3];
    float totalInventario = 0.0;

    // Inicializar los productos.
    strcpy(inventario[0].nombre, "Goma de borrar");
    inventario[0].precio = 10.0;
    inventario[0].cantidad = 5;

    strcpy(inventario[1].nombre, "Sacapuntas");
    inventario[1].precio = 5.0;
    inventario[1].cantidad = 10;

    strcpy(inventario[2].nombre, "Cartulina Blanca");
    inventario[2].precio = 1.0;
    inventario[2].cantidad = 8;

    // Calcular el valor total del inventario.
    for (int i = 0; i < 3; i++) {
        totalInventario += inventario[i].precio * inventario[i].cantidad;
    }

    // Imprimir los productos.
    printf("────୨ৎ────\n");
    printf("[Inventario]\n");
    for (int i = 0; i < 3; i++) {
        printf("\n");
        printf("Producto: %s\n", inventario[i].nombre);
        printf("Precio: $ %.2f\n", inventario[i].precio);
        printf("Cantidad: %d\n", inventario[i].cantidad);
    }
    printf("────୨ৎ────\n"); 
    // Imprimir el valor total del inventario.
    printf("Valor total del inventario: $ %.2f\n", totalInventario);




    return 0;
}

