#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>
#include "admin.h"
#include "bd.h"

// metodos para paciente
void gestionarPacientes() {
    printf("\n--- Gestion de Pacientes ---\n");
    printf("1. Registrar nuevo paciente\n");
    printf("2. Buscar paciente\n");
    printf("3. Editar paciente\n");
    printf("4. Eliminar paciente\n");
    printf("5. Volver\n");
    printf("Seleccione una opcion: ");
    
    int opcion;
    scanf("%d", &opcion);
    
    
}

void registrarNuevoPaciente(sqlite3 *db) {
    char sql[] = "INSERT INTO Paciente (Id_Paciente, DNI_P, Nombre_P, Email, Fecha_Ncto, Genero, Telefono_P, Direccion_P, Fecha_Reg) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?);";
    sqlite3_stmt *stmt;
    
    if (sqlite3_prepare_v2(db, sql, -1, &stmt, 0) != SQLITE_OK) {
        printf("Error preparando la consulta\n");
        return;
    }
    
    char id[20], dni[15], nombre[50], email[50], fecha_ncto[15], genero[10], direccion[100], fecha_reg[15];
    int telefono;
    
    printf("Ingrese ID del paciente: "); 
    scanf("%s", id);
    printf("Ingrese DNI: "); 
    scanf("%s", dni);
    printf("Ingrese Nombre: "); 
    scanf("%s", nombre);
    printf("Ingrese Email: "); 
    scanf("%s", email);
    printf("Ingrese Fecha de Nacimiento (YYYY-MM-DD): "); 
    scanf("%s", fecha_ncto);
    printf("Ingrese Genero: "); 
    scanf("%s", genero);
    printf("Ingrese Telefono: "); 
    scanf("%d", &telefono);
    printf("Ingrese Direccion: "); 
    scanf("%s", direccion);
    printf("Ingrese Fecha de Registro (YYYY-MM-DD): "); 
    scanf("%s", fecha_reg);
    
    sqlite3_bind_text(stmt, 1, id, -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 2, dni, -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 3, nombre, -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 4, email, -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 5, fecha_ncto, -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 6, genero, -1, SQLITE_STATIC);
    sqlite3_bind_int(stmt, 7, telefono);
    sqlite3_bind_text(stmt, 8, direccion, -1, SQLITE_STATIC);
    sqlite3_bind_text(stmt, 9, fecha_reg, -1, SQLITE_STATIC);
    
    if (sqlite3_step(stmt) != SQLITE_DONE) {
        printf("Error insertando paciente\n");
    } else {
        printf("Paciente registrado exitosamente\n");
    }
    
    sqlite3_finalize(stmt);
}

void BuscarPaciente(sqlite3 *db) {
    char sql[] = "SELECT * FROM Paciente WHERE Id_Paciente = ?;";
    sqlite3_stmt *stmt;
    char id[20];
    
    printf("Ingrese ID del paciente a buscar: ");
    scanf("%s", id);
    
    if (sqlite3_prepare_v2(db, sql, -1, &stmt, 0) != SQLITE_OK) {
        printf("Error preparando la consulta\n");
        return;
    }
    
    sqlite3_bind_text(stmt, 1, id, -1, SQLITE_STATIC);
    
    if (sqlite3_step(stmt) == SQLITE_ROW) {
        printf("Paciente encontrado:\n");
        printf("ID: %s, Nombre: %s, DNI: %s, Email: %s, Telefono: %d\n",
               sqlite3_column_text(stmt, 0), sqlite3_column_text(stmt, 2),
               sqlite3_column_text(stmt, 1), sqlite3_column_text(stmt, 3),
               sqlite3_column_int(stmt, 6));
    } else {
        printf("Paciente no encontrado\n");
    }
    
    sqlite3_finalize(stmt);
}

void EditarPaciente(sqlite3 *db) {
    char sql[] = "UPDATE Paciente SET Nombre_P = ?, Telefono_P = ? WHERE Id_Paciente = ?;";
    sqlite3_stmt *stmt;
    char id[20], nombre[50];
    int telefono;
    
    printf("Ingrese ID del paciente a editar: ");
    scanf("%s", id);
    printf("Ingrese nuevo Nombre: ");
    scanf("%s", nombre);
    printf("Ingrese nuevo Telefono: ");
    scanf("%d", &telefono);
    
    if (sqlite3_prepare_v2(db, sql, -1, &stmt, 0) != SQLITE_OK) {
        printf("Error preparando la consulta\n");
        return;
    }
    
    sqlite3_bind_text(stmt, 1, nombre, -1, SQLITE_STATIC);
    sqlite3_bind_int(stmt, 2, telefono);
    sqlite3_bind_text(stmt, 3, id, -1, SQLITE_STATIC);
    
    if (sqlite3_step(stmt) != SQLITE_DONE) {
        printf("Error actualizando paciente\n");
    } else {
        printf("Paciente actualizado exitosamente\n");
    }
    
    sqlite3_finalize(stmt);
}


// metodos para empleado
void gestionarEmpleados() {
    printf("\n--- Gestion de Empleados ---\n");
    printf("1. Registrar nuevo empleado\n");
    printf("2. Buscar empleado\n");
    printf("3. Editar empleado\n");
    printf("4. Eliminar empleado\n");
    printf("5. Volver\n");
    printf("Seleccione una opcion: ");
    
    int opcion;
    scanf("%d", &opcion);
    
    
}

// metodos para reporte
void generarReportes() {
    printf("\n--- Generar Reportes ---\n");
    printf("1. Reporte de pacientes registrados\n");
    printf("2. Reporte de empleados activos\n");
    printf("3. Reporte de citas programadas\n");
    printf("4. Volver\n");
    printf("Seleccione una opcion: ");
    
    int opcion;
    scanf("%d", &opcion);
    
    
}