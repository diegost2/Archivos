#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char buffer[100]={"Esto es un texto dentro del fichero."};
    char bufferln[100];

    fp=fopen("D:\\clase\\fichero.txt","w");
    fprintf(fp,buffer);
    fprintf(fp,"\nEsto es otro texto dentro del fichero");
    fprintf(fp,"\nEsto es otro texto dentro del fichero, y el buffer ");

    fclose(fp);
    system("pause");
    system("cls");

    fp=fopen("D:\\clase\\fichero.txt","r");

    if(fp==NULL)
    {
        printf("No se encontro el archivo");
    }
    else{
            while(!feof(fp))
                {
                    fgets(bufferln,100,fp); //(lo que va a leer(variable en dnde se guarda el texto dentro), tamaño,archivo)
                    puts(bufferln); //muestro
                }
        }
    fclose(fp);

    return 0;
}
