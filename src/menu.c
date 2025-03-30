#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"


//menu.c (este)
void menuMedico() {
    int opcion;
    do {
        printf("\n-- Medico --\n");
        printf("1. Citas\n");
        printf("2. Informacion Paciente\n");
        printf("3. Atencion al Cliente\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
    } while(opcion != 4);
}

void menuPaciente() {
    int opcion;
    do {
        printf("\n-- Paciente --\n");
        printf("1. Gestion de Citas Medicas\n");
        printf("2. Consultar Historial Medico\n");
        printf("3. Gestion de Empleados\n");
        printf("4. Generacion de Reportes\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
    } while(opcion != 5);
}

void menuAdministracion() {
    int opcion;
    do {
        printf("\n-- Administracion --\n");
        printf("1. Gestion de Pacientes\n");
        printf("2. Historial Medico\n");
        printf("3. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
    } while(opcion != 3);
}