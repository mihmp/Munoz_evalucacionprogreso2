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

    //#1 Ingresar las calificaciones, calculo de promedios y mejor estudiante//
    ingresarNotas(calificaciones);
    calcularPromedioEstudiante(calificaciones, promedioEstudiantes);
    calcularPromedioAvance(calificaciones, promedioAvances);
    mejorEstudiante = encontrarMejorEstudiante(promedioEstudiantes);

    //#5 Muestro en pantalla los resultados//
    printf("Promedio de cada estudiante:\n");
    for (int i = 0; i < NUM_ALUMNOS; i++) {
        printf("Estudiante %d: %.2f\n", i + 1, promedioEstudiantes[i]);
    }

    printf("\nPromedio de grupo para cada progreso:\n");
    for (int j = 0; j < NUM_PROGRESOS; j++) {
        printf("Avance %d: %.2f\n", j + 1, promedioAvances[j]);
    }

    printf("\nEl estudiante con el mejor promedio es el Estudiante %d con un promedio de %.2f\n", mejorEstudiante + 1, promedioEstudiantes[mejorEstudiante]);

    return 0;
}




    

