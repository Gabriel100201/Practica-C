#include <stdio.h>
#include <stdlib.h>

void agregarAlInicio(int **doblePuntero)
{
    printf("%d", **doblePuntero);
}

int main(int argc, char const *argv[])
{
    int numero = 10;
    int *punteroA = &numero;
    int **punteroB = &punteroA;
    int ***punteroC = &punteroB;
    printf("Numero: %d\n", numero);
    printf("Puntero A: %d\n", *punteroA);
    printf("Puntero B: %d\n", **punteroB);
    printf("Puntero C: %d\n", ***punteroC);

    //ESTO
    agregarAlInicio(punteroB);
    //ES IGUAL QUE ESTO
    agregarAlInicio(&punteroA);
    //YA QUÉ SE PASA EL PUNTERO DOBLE B Y TAMBIEN LA DIRECCION AL PUNTERO A (DIRECCION DE UN PUNTERO = PUNTERO DOBLE)
    return 0;
}
