#include <stdio.h>

typedef struct{
    char pasaporte[80];
    char nombre[80];
    int destino; //100: Bahamas, 101: Bermudas: 102: Puerto Rico, 103: República Dominicana
    int clase; //1 - 10
    float monto;
}Pasaje;

Pasaje * cargar(nvect)
