#include <stdio.h>
#include <stdlib.h>
#include "medico.h"
#include "bd.h"

void gestionarCitasMedico() {
    printf("\n--- Gestion de Citas ---\n");
    printf("1. Consultar citas programadas\n");
    printf("2. Cancelar cita\n");
    printf("3. Otorgar nueva cita\n");
    printf("4. Volver\n");
    printf("Seleccione una opcion: ");
    
    int opcion;
    scanf("%d", &opcion);
    
    
}

void consultarHistorialPaciente() {
    char dni[10];
    printf("\n--- Consultar Historial Medico ---\n");
    printf("Introduzca DNI del paciente: ");
    scanf("%s", dni);
    
    printf("Mostrando historial médico para paciente con DNI: %s\n", dni);
}

void atenderCita() {
    printf("\n--- Atender Cita ---\n");
    printf("1. Registrar diagnóstico\n");
    printf("2. Prescribir tratamiento\n");
    printf("3. Añadir observaciones\n");
    printf("4. Finalizar atención\n");
    printf("Seleccione una opcion: ");
    
    int opcion;
    scanf("%d", &opcion);
    
    
}