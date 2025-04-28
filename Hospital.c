#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de la estructura Paciente
typedef struct Paciente {
    char nombre[50];
    int edad;
    char diagnostico[100];
    int prioridad;
    struct Paciente* siguiente;
} Paciente; 

// Crear un nuevo paciente
Paciente* crearPaciente(const char* nombre, int edad, const char* diagnostico, int prioridad){
    Paciente* nuevoPaciente = (Paciente*)malloc(sizeof(Paciente));
    if (!nuevoPaciente) {
        printf("Error al asignar memoria.\n");
        exit(1);
    }
    strcpy(nuevoPaciente->nombre, nombre);
    strcpy(nuevoPaciente->diagnostico, diagnostico);
    nuevoPaciente->edad = edad;
    nuevoPaciente->prioridad = prioridad;
    nuevoPaciente->siguiente = NULL;
    return nuevoPaciente;
}

// Agregar paciente al inicio de la lista
void agregarPaciente(Paciente** inicio, Paciente* nuevoPaciente){
    nuevoPaciente->siguiente = *inicio;
    *inicio = nuevoPaciente;
}

// Eliminar un paciente
void eliminarPaciente(Paciente** inicio, const char* nombre){
    Paciente* temp = *inicio;
    Paciente* prev = NULL;

    if (temp != NULL && strcmp(temp->nombre, nombre) == 0) {
        *inicio = temp->siguiente;
        free(temp);
        printf("Paciente eliminado exitosamente.\n");
        return;
    }

    while (temp != NULL && strcmp(temp->nombre, nombre) != 0) {
        prev = temp;
        temp = temp->siguiente;
    }

    if (temp == NULL) {
        printf("Paciente no encontrado.\n");
        return;
    }

    prev->siguiente = temp->siguiente;
    free(temp);
    printf("Paciente eliminado exitosamente.\n");
}

// Buscar un paciente
void buscarPaciente(Paciente* inicio, const char* nombre){
    Paciente* temp = inicio;

    while (temp != NULL) {
        if (strcmp(temp->nombre, nombre) == 0) { 
            printf("\nPaciente encontrado:\n");
            printf("Nombre: %s\n", temp->nombre);
            printf("Edad: %d\n", temp->edad);
            printf("Diagnóstico: %s\n", temp->diagnostico);
            printf("Prioridad: %d\n", temp->prioridad);
            return;
        }
        temp = temp->siguiente;
    }
    printf("Paciente no encontrado.\n"); 
}

// Imprimir la lista de pacientes
void imprimirPacientes(Paciente* inicio){
    Paciente* temp = inicio;
    if (temp == NULL) {
        printf("No hay pacientes registrados.\n");
        return;
    }

    printf("\nLista de pacientes:\n");
    while (temp != NULL) {
        printf("Nombre: %s\n", temp->nombre);
        printf("Edad: %d\n", temp->edad);
        printf("Diagnóstico: %s\n", temp->diagnostico);
        printf("Prioridad: %d\n\n", temp->prioridad);
        temp = temp->siguiente;
    }
}

// Liberar toda la memoria de la lista
void liberarPacientes(Paciente* inicio) {
    Paciente* temp;
    while (inicio != NULL) {
        temp = inicio;
        inicio = inicio->siguiente;
        free(temp);
    }
}
