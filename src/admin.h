#ifndef ADMIN_H
#define ADMIN_H

typedef struct {
    int id;
    char nombre[50];
    char apellido1[50];
    char apellido2[50];
    char dni[10];
    char cargo[50];
    char telefono[15];
    char email[100];
} Empleado;

void gestionarPacientes();
void gestionarEmpleados();
void generarReportes();

#endif