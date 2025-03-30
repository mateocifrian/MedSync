#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "medico.h"
#include "bd.h"

void gestionarCitasMedico() {
    int opcion;
    do {
        printf("\n--- Gestion de Citas ---\n");
        printf("1. Consultar citas programadas\n");
        printf("2. Cancelar cita\n");
        printf("3. Otorgar nueva cita\n");
        printf("4. Volver\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1:
                // Lógica para consultar citas programadas
                printf("\nConsultando citas programadas...\n");
                // Aquí iría la llamada a la función de BD para obtener las citas
                break;
            case 2:
                // Lógica para cancelar cita
                printf("\nCancelando cita...\n");
                // Aquí iría la llamada a la función de BD para cancelar cita
                break;
            case 3:
                // Lógica para otorgar nueva cita
                printf("\nOtorgando nueva cita...\n");
                // Aquí iría la llamada a la función de BD para crear nueva cita
                break;
            case 4:
                printf("\nVolviendo al menú principal...\n");
                break;
            default:
                printf("\nOpción no válida. Intente nuevamente.\n");
        }
    } while(opcion != 4);
}

void consultarHistorialPaciente() {
    char dni[10];
    printf("\n--- Consultar Historial Medico ---\n");
    printf("Introduzca DNI del paciente: ");
    scanf("%s", dni);
    
    // Validar DNI (ejemplo básico)
    if(strlen(dni) != 8) {
        printf("DNI no válido. Debe tener 8 caracteres.\n");
        return;
    }
    
    // Aquí iría la lógica para buscar en la base de datos
    printf("\nMostrando historial médico para paciente con DNI: %s\n", dni);
    printf("------------------------------------------------\n");
    printf("Diagnósticos previos: [datos de BD]\n");
    printf("Tratamientos anteriores: [datos de BD]\n");
    printf("Alergias: [datos de BD]\n");
    printf("Notas importantes: [datos de BD]\n");
}

void atenderCita() {
    int opcion;
    do {
        printf("\n--- Atender Cita ---\n");
        printf("1. Registrar diagnóstico\n");
        printf("2. Prescribir tratamiento\n");
        printf("3. Añadir observaciones\n");
        printf("4. Finalizar atención\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1: {
                char diagnostico[256];
                printf("\nIngrese el diagnóstico: ");
                getchar(); // Limpiar buffer
                fgets(diagnostico, sizeof(diagnostico), stdin);
                diagnostico[strcspn(diagnostico, "\n")] = '\0'; // Eliminar salto de línea
                // Guardar diagnóstico en BD
                printf("Diagnóstico registrado correctamente.\n");
                break;
            }
            case 2: {
                char tratamiento[256];
                printf("\nIngrese el tratamiento prescrito: ");
                getchar(); 
                fgets(tratamiento, sizeof(tratamiento), stdin);
                tratamiento[strcspn(tratamiento, "\n")] = '\0';
                // Guardar tratamiento en BD
                printf("Tratamiento registrado correctamente.\n");
                break;
            }
            case 3: {
                char observaciones[512];
                printf("\nIngrese las observaciones: ");
                getchar(); // Limpiar buffer
                fgets(observaciones, sizeof(observaciones), stdin);
                observaciones[strcspn(observaciones, "\n")] = '\0'; // Eliminar salto de línea
                // Guardar observaciones en BD
                printf("Observaciones añadidas correctamente.\n");
                break;
            }
            case 4:
                printf("\nFinalizando atención...\n");
                // Aquí iría cualquier lógica de limpieza o confirmación
                break;
            default:
                printf("\nOpción no válida. Intente nuevamente.\n");
        }
    } while(opcion != 4);
}