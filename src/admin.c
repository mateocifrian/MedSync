#include <stdio.h>
#include <stdlib.h>
#include "admin.h"
#include "bd.h"

void gestionarPacientes() {
    printf("\n--- Gestion de Pacientes ---\n");
    printf("1. Registrar nuevo paciente\n");
    printf("2. Buscar paciente\n");
    printf("3. Editar paciente\n");
    printf("4. Eliminar paciente\n");
    printf("5. Volver\n");
    printf("Seleccione una opcion: ");
    
    int opcion;
    scanf("%d", &opcion);
    
    
}

void gestionarEmpleados() {
    printf("\n--- Gestion de Empleados ---\n");
    printf("1. Registrar nuevo empleado\n");
    printf("2. Buscar empleado\n");
    printf("3. Editar empleado\n");
    printf("4. Eliminar empleado\n");
    printf("5. Volver\n");
    printf("Seleccione una opcion: ");
    
    int opcion;
    scanf("%d", &opcion);
    
    
}

void generarReportes() {
    printf("\n--- Generar Reportes ---\n");
    printf("1. Reporte de pacientes registrados\n");
    printf("2. Reporte de empleados activos\n");
    printf("3. Reporte de citas programadas\n");
    printf("4. Volver\n");
    printf("Seleccione una opcion: ");
    
    int opcion;
    scanf("%d", &opcion);
    
    
}