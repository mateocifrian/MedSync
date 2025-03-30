#ifndef PACIENTE_H
#define PACIENTE_H


typedef struct 
{  
    char Id_Paciente[50];
	char DNI_P[50];
	char Nombre_P [50];
	char Email[50];
	char Fecha_Ncto[50];
	char Genero[50];
	char Telefono_P[50];
	char Direccion_P[50];
	char Fecha_Reg[50];
}paciente;


void gestionarCitasPaciente();
void consultarMiHistorial();
void enviarReporte();

#endif