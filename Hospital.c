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

int main(){
    int bandera = 0;
    int decision;
    Paciente* lista = NULL;
    char nombre[50];
    char diagnostico[100];
    int edad;
    int prioridad;

    // Agregar 10 pacientes predefinidos
    agregarPaciente(&lista, crearPaciente("Juan Pérez", 45, "Dolor de cabeza", 2));
    agregarPaciente(&lista, crearPaciente("Ana López", 30, "Fractura", 1));
    agregarPaciente(&lista, crearPaciente("Carlos Martínez", 50, "Resfriado", 3));
    agregarPaciente(&lista, crearPaciente("Lucía González", 60, "Presión alta", 2));
    agregarPaciente(&lista, crearPaciente("Pedro Gómez", 22, "Tos", 3));
    agregarPaciente(&lista, crearPaciente("Marta Ruiz", 35, "Cefalea", 1));
    agregarPaciente(&lista, crearPaciente("José García", 40, "Gripe", 3));
    agregarPaciente(&lista, crearPaciente("Sofía Rodríguez", 25, "Migraña", 1));
    agregarPaciente(&lista, crearPaciente("Raúl Sánchez", 27, "Esguince", 2));
    agregarPaciente(&lista, crearPaciente("Elena Fernández", 55, "Estrés", 2));

    // Programa principal
    while (bandera != 1) {
        printf("\nBienvenido al sistema del hospital:\n");
        printf("1. Registrar nuevo paciente\n");
        printf("2. Buscar paciente\n");
        printf("3. Dar de baja paciente\n");
        printf("4. Ver lista de pacientes\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &decision);

        switch (decision) {
            case 1:
                printf("Ingrese el nombre del paciente: ");
                scanf(" %[^\n]", nombre);
            
                printf("Ingrese la edad del paciente: ");
                scanf("%d", &edad);
            
                printf("Ingrese el diagnóstico del paciente: ");
                scanf(" %[^\n]", diagnostico);
            
                printf("Ingrese la prioridad del paciente (1-Urgente, 2-Moderada, 3-Baja): ");
                scanf("%d", &prioridad);
            
                agregarPaciente(&lista, crearPaciente(nombre, edad, diagnostico, prioridad));
                printf("Paciente registrado exitosamente.\n");
                break;

            case 2:
                printf("Ingrese el nombre del paciente a buscar: ");
                scanf(" %[^\n]", nombre);
                buscarPaciente(lista, nombre); 
                break;
            
            case 3:
                printf("Ingrese el nombre del paciente a eliminar: ");
                scanf(" %[^\n]", nombre);
                eliminarPaciente(&lista, nombre); 
                break;

            case 4:
                imprimirPacientes(lista);
                break;

            case 5:
                bandera = 1;
                printf("Gracias por usar el sistema.\n");
                break;

            default:
                printf("Opción inválida, intente nuevamente.\n");
                break;
        }
    }

    liberarPacientes(lista);  // Liberar memoria antes de salir
    return 0;
}

