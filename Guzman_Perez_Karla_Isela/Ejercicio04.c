//4. Crea una estructura Departamento que contenga un arreglo de Empleado dinámico. Usando sales.employees = (Employee*)malloc(sales.nEmployees * sizeof(Employee));

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nombre[20];
    float salario;
} Empleado;

typedef struct {
    char nombre[20];
    int numEmpleados;
    Empleado *empleados; // Puntero a un arreglo de empleados
} Departamento;

int main() {
    Departamento ventas;

    printf("Ingrese el nombre del departamento: ");
    scanf("%s", ventas.nombre);
    
    printf("Ingrese el número de empleados: ");
    scanf("%d", &ventas.numEmpleados);
    
    // Asignar memoria para el arreglo de empleados
    ventas.empleados = (Empleado*)malloc(ventas.numEmpleados * sizeof(Empleado));
    //sales.employees = (Employee*)malloc(sales.nEmployees * sizeof(Employee));
    
    // Verificar si la memoria se asignó correctamente
    if (ventas.empleados == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }
    
    // Inicializar los empleados
    for (int i = 0; i < ventas.numEmpleados; i++) {
        printf("Ingrese el nombre del empleado %d: ", i + 1);
        scanf("%s", ventas.empleados[i].nombre);
        
        printf("Ingrese el salario del empleado %d: ", i + 1);
        scanf("%f", &ventas.empleados[i].salario);
    }

    // Imprimir los datos del departamento y empleados
    printf("\n────୨ৎ────\n");
    printf("[Departamento: %s]\n", ventas.nombre);
    printf("Número de empleados: %d\n", ventas.numEmpleados);  

    for (int i = 0; i < ventas.numEmpleados; i++) {
        printf("\n");
        printf("Empleado %d: %s\n", i + 1, ventas.empleados[i].nombre);
        printf("Salario: $ %.2f\n", ventas.empleados[i].salario);
    }
    printf("────୨ৎ────\n"); 

    // Liberar la memoria asignada
    free(ventas.empleados); 
    ventas.empleados = NULL; 

    return 0;

}


