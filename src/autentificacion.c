#include <stdio.h>
#include <string.h>
#include "autentificacion.h"

// Función que realiza todo el proceso de autenticación y retorna el tipo de usuario
TipoUsuario autentificarUsuario(const char *usuario, const char *contrasena) {
    FILE *archivo = fopen("../ficheros/usuarios.txt", "r");
    
    if (!archivo) {
        printf("Error al abrir el archivo de usuarios.\n");
        return TIPO_DESCONOCIDO;
    }

    char linea[MAX_LINE];
    char credencialUsuario[MAX_USER];
    char credencialContrasena[MAX_PASS];
    
    TipoUsuario tipo = TIPO_DESCONOCIDO;

    while (fgets(linea, MAX_LINE, archivo)) {
        if (strstr(linea, "Medicos:")) tipo = TIPO_MEDICO;
        if (strstr(linea, "Pacientes:")) tipo = TIPO_PACIENTE;
        if (strstr(linea, "Administracion:")) tipo = TIPO_ADMIN;

        if (sscanf(linea, "usuario: %s", credencialUsuario) == 1) {
            fgets(linea, MAX_LINE, archivo);
            sscanf(linea, "contrasena: %s", credencialContrasena);
            
            if (strcmp(usuario, credencialUsuario) == 0 && strcmp(contrasena, credencialContrasena) == 0) {
                fclose(archivo);
                return tipo;
            }
        }
    }

    fclose(archivo);
    return TIPO_DESCONOCIDO;
}

void autenticarYMostrarMensaje(const char *usuario, const char *contrasena) {
    TipoUsuario tipo = autentificarUsuario(usuario, contrasena);
    
    switch (tipo) {
        case TIPO_MEDICO:
            printf("Autenticacion exitosa. Bienvenido, Dr. %s!\n", usuario);
            break;
        case TIPO_PACIENTE:
            printf("Autenticacion exitosa. Bienvenido, paciente %s!\n", usuario);
            break;
        case TIPO_ADMIN:
            printf("Autenticacion exitosa. Bienvenido, administrador %s!\n", usuario);
            break;
        default:
            printf("Usuario o contrasena incorrectos.\n");
            break;
    }
}
