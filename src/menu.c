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

    while (1) {
        printf("\nMENU DE PACIENTE\n");
        printf("1. Gestion de Citas Medicas\n");
        printf("2. Consultar Historial Medico\n");
        printf("3. Atencion al Cliente\n");
        printf("4. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                gestionarCitas();
                break;
            case 2:
                consultarHistorial();
                break;
            case 3:
                atencionCliente();
                break;
            case 4:
                printf("Saliendo...\n");
                exit(0);
                break;
            default:
                printf("Opcion no valida. Intente de nuevo.\n");
        }
    } 
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