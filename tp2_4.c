#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3

struct compu {
    int velocidad;//entre 1 y 3 GHz
    int anio;//entre 2015 y 2023
    int cantidad;//entre 1 y 8
    char *tipo_cpu; //valores del arreglo tipos
};

int main()
{
    struct compu compus[N];
    char *tipos[] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    printf("Ingrese las características de %d PC:\n", N);

    for (int i = 0; i < N; i++)
    {
        printf("\nPC %d\n", i + 1);

        printf("Velocidad (GHz) entre 1 y 3: ");
        scanf("%d", &compus[i].velocidad);

        printf("Año (entre 2015 y 2023): ");
        scanf("%d", &compus[i].anio);

        printf("Cantidad (1-8): ");
        scanf("%d", &compus[i].cantidad);

        printf("Tipo CPU (0-Intel , 1-AMD ,  2-Celeron , 3-Athlon, 4-Core, 5-Pentium): ");
        int tipo;
        scanf("%d", &tipo);
        compus[i].tipo_cpu = tipos[tipo];
    }

    printf("\nCaracterísticas de las %d PC:\n", N);

    for (int i = 0; i < N; i++)
    {
        printf("\nPC %d\n", i + 1);

        printf("Velocidad (GHz): %d\n", compus[i].velocidad);
        printf("Año (2015-2023): %d\n", compus[i].anio);
        printf("Cantidad (1-8): %d\n", compus[i].cantidad);
        printf("Tipo CPU: %s\n", compus[i].tipo_cpu);
    }
    return 0;
}