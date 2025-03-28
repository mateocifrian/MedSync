// citas.h
#ifndef CITAS_H
#define CITAS_H

#include "bd.h"

typedef struct {
    int id;
    int id_paciente;
    int id_medico;
    char fecha[20];
    char motivo[100];
    char estado[20];
} Cita;

// Hay que crear una ConexionBD para que funcione, cuando este hacemos el .c

bool agregar_cita(ConexionBD *con, int id_paciente, int id_medico,  char *fecha,  char *motivo);
bool cancelar_cita(ConexionBD *con, int id_cita);
Cita* obtener_citas_paciente(ConexionBD *con, int id_paciente, int *num_citas);
Cita* obtener_citas_medico(ConexionBD *con, int id_medico, char *fecha, int *num_citas);

#endif