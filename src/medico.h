#ifndef MEDICO_H
#define MEDICO_H

typedef struct 
{
    char Id_Medico[50];
	char Nombre_M[50];
	char DNI_M[50];
	char Telefono_M[50];
	char Especialidad[50];
} medico;


void gestionarCitasMedico();
void consultarHistorialPaciente();
void atenderCita();

#endif