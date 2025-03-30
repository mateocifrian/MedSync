#ifndef CITAS_H
#define CITAS_H

typedef struct {
    int id;
    int id_paciente;
    int id_medico;
    char fecha[20];
    char hora[10];
    char motivo[100];
    char estado[20];  // "programada", "cancelada", "completada"
} Cita;

void solicitarCita(int id_paciente);
void modificarCita(int id_cita);
void cancelarCita(int id_cita);
void listarCitasPaciente(int id_paciente);
void listarCitasMedico(int id_medico);

#endif