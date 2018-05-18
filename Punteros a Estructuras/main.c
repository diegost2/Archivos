#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int a; //int=4 bytes
    char b; //char=1 bytes
}dato;

int main()
{
    dato d;
    d.a=5;
    d.b='<';
    //printf("TAM: %d\n",sizeof(int)); //SIZEOF permite saber el tamano de una variable o tipo de dato


    dato* pDato;
    pDato=&d;

    /*printf("%d -- %c\n",(*pDato).a,(*pDato).b); //
    printf("%d -- %c",pDato->a,pDato->b); //Operador Flecha*/
    //printf("%d %c",d.a,d.b);
    return 0;
}
