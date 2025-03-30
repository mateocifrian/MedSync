#include <stdio.h>
#include <stdlib.h>
#include "paciente.h"
#include "bd.h"

void gestionarCitasPaciente() {
    printf("\n--- Mis Citas ---\n");
    printf("1. Solicitar nueva cita\n");
    printf("2. Consultar citas programadas\n");
    printf("3. Modificar cita\n");
    printf("4. Cancelar cita\n");
    printf("5. Volver\n");
    printf("Seleccione una opcion: ");
    
    int opcion;
    scanf("%d", &opcion);
    
   
}

void consultarMiHistorial() {
    printf("\n--- Mi Historial Medico ---\n");
    printf("Mostrando historial médico del paciente actual\n");
}

void enviarReporte() {
    printf("\n--- Atencion al Cliente ---\n");
    printf("Describa su queja o sugerencia:\n");
    
    char descripcion[500];
    scanf(" [^\n]", descripcion);  
    
    printf("Reporte enviado. Gracias por su feedback.\n");
}