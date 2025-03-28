#ifndef ADMIN_H
#define ADMIN_H

#include "bd.h"

typedef struct {
    int id;
    char nombre[50];
    char apellido[50];
    char cargo[50];
    char email[100];
    bool activo;
} Empleado;

// Hay que crear una ConexionBD para que funcione, cuando este hacemos el .c

bool registrarEmpleado(ConexionBD *con,  char *nombre,  char *apellido,  char *cargo, char *email,  char *contrasena);
bool actualizarEmpleado(ConexionBD *con, int id_empleado,  char *cargo, bool activo);
bool eliminarEmpleado(ConexionBD *con, int id_empleado);
Empleado* listarEmpleados(ConexionBD *con, int *num_empleados);
void generarReportePacientes(ConexionBD *con);
void generarReporteCitas(ConexionBD *con,  char *fecha_inicio,  char *fecha_fin);

#endif