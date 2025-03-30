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


int esFechaValida(const char *fecha);
void obtenerFechaActual(int *dia, int *mes, int *anio);
int esFechaFutura(int diaCita, int mesCita, int anioCita);
void menuPaciente();
void gestionarCitas();
void consultarHistorial();
void atencionCliente();

#endif