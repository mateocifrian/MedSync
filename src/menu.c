#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "medico.h"
#include "paciente.h"
#include "admin.h"

void menuMedico() {
    int opcion;
    do {
        printf("\n--- Menu Medico ---\n");
        printf("1. Gestion de citas\n");
        printf("2. Historiales medicos\n");
        printf("3. Atender cita\n");
        printf("4. Cerrar sesion\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1:
                gestionarCitasMedico();
                break;
            case 2:
                consultarHistorialPaciente();
                break;
            case 3:
                atenderCita();
                break;
            case 4:
                printf("Cerrando sesión de médico...\n");
                break;
        }
    } while(opcion != 4);
}

void menuPaciente() {
    int opcion;
    do {
        printf("\n--- Menu Paciente ---\n");
        printf("1. Mis citas\n");
        printf("2. Mi historial medico\n");
        printf("3. Atencion al cliente\n");
        printf("4. Cerrar sesion\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1:
                gestionarCitasPaciente();
                break;
            case 2:
                consultarMiHistorial();
                break;
            case 3:
                enviarReporte();
                break;
            case 4:
                printf("Cerrando sesión de paciente...\n");
                break;
        }
    } while(opcion != 4);
}

void menuAdministracion() {
    int opcion;
    do {
        printf("\n--- Menu Administrador ---\n");
        printf("1. Gestion de pacientes\n");
        printf("2. Gestion de empleados\n");
        printf("3. Generar reportes\n");
        printf("4. Cerrar sesion\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1:
                gestionarPacientes();
                break;
            case 2:
                gestionarEmpleados();
                break;
            case 3:
                generarReportes();
                break;
            case 4:
                printf("Cerrando sesión de administrador...\n");
                break;
        }
    } while(opcion != 4);
}