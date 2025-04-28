//3. Crea una función que retorne una estructura Punto con coordenadas aleatorias. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int x;
    int y;
} Punto;

int main() {
    srand(time(NULL)); // Inicializar la semilla para números aleatorios

    Punto p;
    p.x = rand() % 100; // Coordenada x aleatoria entre 0 y 99
    p.y = rand() % 100; // Coordenada y aleatoria entre 0 y 99

    printf("────୨ৎ────\n");
    printf("[Punto Aleatorio]\n");
    printf("X: %d\n", p.x); // Imprimir coordenada x
    printf("Y: %d\n", p.y); // Imprimir coordenada y
    printf("────୨ৎ────\n");

    return 0;
} 
