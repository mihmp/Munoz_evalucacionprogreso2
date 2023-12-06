//Incluyo librerias necesarias//
#include <stdio.h>

// Defino las constantes//
#define num_estudiantes 23
#define num_progresos 3

// Declarar funciones//
void ingresarnotas(float calificaciones[num_estudiantes][num_progresos]);
void calcularpromedioestudiante(float calificaciones[num_estudiantes][num_progresos], float promedioEstudiantes[num_estudiantes]);
void calcularpromedioavance(float calificaciones[num_estudiantes][num_progresos], float promedioAvances[num_progresos]);
int encontrarmejorestudiante(float promedioEstudiantes[num_estudiantes]);

//Abro la funcion main y realizo por pasos//
int main() {
    float notas[num_estudiantes][num_progresos];
    float promedioestudiantes[num_estudiantes];
    float promedioprogresos[num_progresos];
    int mejorestudiante;

    //#1 Ingresar las calificaciones, calculo de promedios y mejor estudiante//
    ingresarnotas(notas);
    calcularpromedioestudiante(notas, promedioestudiantes);
    calcularpromedioavance(notas, promedioprogresos);
    mejorestudiante = encontrarmejorestudiante(promedioestudiantes);

    //#5 Muestro en pantalla los resultados//
    printf("Promedio de cada estudiante:\n");
    for (int i = 0; i < num_estudiantes; i++) {
        printf("Estudiante %d: %.2f\n", i + 1, promedioestudiantes[i]);
    }

    printf("\nPromedio de grupo para cada progreso:\n");
    for (int j = 0; j < num_progresos; j++) {
        printf("Progreso %d: %.2f\n", j + 1, promedioprogresos[j]);
    }

    printf("\nEl estudiante con el mejor promedio es el Estudiante %d con un promedio de %.2f\n", mejorestudiante + 1, promedioestudiantes[mejorestudiante]);

    return 0;
}

// Uso función para ingresar las notas de cada estudiante (Subproblema 1)//
void ingresarnotas(float notas[num_estudiantes][num_progresos]) {
    for (int i = 0; i < num_estudiantes; i++) {
        printf("Ingrese las notas del Estudiante %d:\n", i + 1);
        for (int j = 0; j < num_progresos; j++) {
            printf("Progreso %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }
}

// Ahora lo hago para calcular el promedio de cada estudiante (Subproblema 2)//
void calcularpromedioestudiante(float notas[num_estudiantes][num_progresos], float promedioEstudiantes[num_estudiantes]) {
    for (int i = 0; i < num_estudiantes; i++) {
        float suma = 0;
        for (int j = 0; j < num_progresos; j++) {
            suma += notas[i][j];
        }
        promedioEstudiantes[i] = suma / num_progresos;
    }
}

//Es de igual manera para calcular el promedio del grupo para cada progreso (Subproblema 3)//
void calcularpromedioavance(float notas[num_estudiantes][num_progresos], float promedioprogresos[num_progresos]) {
    for (int j = 0; j < num_progresos; j++) {
        float suma = 0;
        for (int i = 0; i < num_estudiantes; i++) {
            suma += notas[i][j];
        }
        promedioprogresos[j] = suma / num_estudiantes;
    }
}

// Ahora para encontrar al estudiante con el mejor promedio (Subproblema 4)//
int encontrarmejorestudiante(float promedioestudiantes[num_estudiantes]) {
    float mejorpromedio = promedioestudiantes[0];
    int mejorestudiante = 0;

    for (int i = 1; i < num_estudiantes; i++) {
        if (promedioestudiantes[i] > mejorpromedio) {
            mejorpromedio = promedioestudiantes[i];
            mejorestudiante = i;
        }
    }

    return mejorestudiante;
}



    

