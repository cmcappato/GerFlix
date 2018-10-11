#include <stdio.h>
#include <string.h>
#include "UsuariosYSeries.h"

void mostrarUsuarioConSuSerie(eUsuario usuarios[], int tamUsuarios, eSerie series[], int tamSeries)
{
    int i;
    int j;

    for(i=0; i<tamUsuarios; i++)
    {
        printf("%s\n", usuarios[i].nombre);

        for(j=0; j<tamSeries; j++)
        {
            if (usuarios[i].idSerie ==series[j].idSerie)
            {
                printf("\t%s\n", series[j].nombre);
                break;
            }
        }
        printf("\n");
    }
}
void mostrarSeriesConSusUsuarios(eUsuario usuarios[], int tamUsuarios, eSerie series[], int tamSeries)
{
    int i;
    int j;

    for (i=0; i<tamSeries; i++)
    {
        printf("%s\n", series[i].nombre);

        for(j=0; j<tamUsuarios;j++)
        {
            if (series[i].idSerie == usuarios[j].idSerie)
            {
                printf("\t%s\n", usuarios[j].nombre);
                break;
            }
        }
        printf("\n");
    }
}
