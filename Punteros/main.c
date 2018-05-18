#include <stdio.h>
#include <stdlib.h>

int CargarDatos(int *Array,int tam);
void MostrarArray(int *Array,int tam);

int main()
{
    int vector[3];

    if(CargarDatos(vector,3)){
        printf("\nCarga exitosa.\n\n");
    }
    else{
        printf("\nError al cargar datos.\n\n");
    }

    MostrarArray(vector,3);
    return 0;
}

void MostrarArray(int *Array,int tam)
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("%d \n",*(Array+i));
    }

}

int CargarDatos(int *Array,int tam)
{
    int i;
    int retorno=0;
    if(Array!=NULL)
    {
        retorno=1;
        for(i=0;i<3;i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d",Array+i);
        }

    }
    return retorno;
}
