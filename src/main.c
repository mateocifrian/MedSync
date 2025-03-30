#include <stdio.h>
#include <stdlib.h>
#include "autentificacion.h"
#include "bd.h"

/*void mostrar_menu_principal() {
    printf("\n=== MedSync - Sistema de Gestion Hospitalaria ===\n");
    printf("1. Iniciar sesion\n");
    printf("2. Registrarse (Pacientes)\n");
    printf("3. Salir\n");
    printf("Seleccione una opcion: ");
}

void mostrar_menu_administrador() {
    printf("\n=== Menu Administrador ===\n");
    printf("1. Gestion de pacientes\n");
    printf("2. Gestion de empleados\n");
    printf("3. Generar reportes\n");
    printf("4. Cerrar sesion\n");
    printf("Seleccione una opcion: ");
}

void mostrar_menu_medico() {
    printf("\n=== Menu Medico ===\n");
    printf("1. Gestion de citas\n");
    printf("2. Historiales medicos\n");
    printf("3. Cerrar sesion\n");
    printf("Seleccione una opcion: ");
}

void mostrar_menu_paciente() {
    printf("\n=== Menu Paciente ===\n");
    printf("1. Mis citas\n");
    printf("2. Mi historial medico\n");
    printf("3. Atencion al cliente\n");
    printf("4. Cerrar sesion\n");
    printf("Seleccione una opcion: ");
}*/

//main_menu.c
int main(int argc, char *argv[]) {
    char usuario[MAX_USER], contrasena[MAX_PASS];
    
    printf("Ingrese usuario: ");
    scanf("%s", usuario);
    
    printf("Ingrese contrasena: ");
    scanf("%s", contrasena);
    
    autenticarYMostrarMensaje(usuario, contrasena);


    if (argc != 2) {
        printf("Uso: %s [medico|paciente|admin]\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "medico") == 0) {
        menuMedico();
    } else if (strcmp(argv[1], "paciente") == 0) {
        menuPaciente();
    } else if (strcmp(argv[1], "admin") == 0) {
        menuAdministracion();
    } else {
        printf("Opción no válida. Use: medico, paciente o admin.\n");
        return 1;
    }

    return 0;
}