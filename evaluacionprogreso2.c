//Incluyo librerias necesarias//
#include <stdio.h>

// Defino las constantes//
#define NUM_ALUMNOS 23
#define NUM_PROGRESOS 3

// Declarar funciones//
void ingresarNotas(float calificaciones[NUM_ALUMNOS][NUM_PROGRESOS]);
void calcularPromedioEstudiante(float calificaciones[NUM_ALUMNOS][NUM_PROGRESOS], float promedioEstudiantes[NUM_ALUMNOS]);
void calcularPromedioAvance(float calificaciones[NUM_ALUMNOS][NUM_PROGRESOS], float promedioAvances[NUM_PROGRESOS]);
int encontrarMejorEstudiante(float promedioEstudiantes[NUM_ALUMNOS]);

//Abro la funcion main y realizo por pasos//
int main() {
    float calificaciones[NUM_ALUMNOS][NUM_PROGRESOS];
    float promedioEstudiantes[NUM_ALUMNOS];
    float promedioAvances[NUM_PROGRESOS];
    int mejorEstudiante;

