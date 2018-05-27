#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int azar(void);


int main(void)
{
    /* NUmero  de alzahar
    int  n;
    srand(time(NULL)); //semilla de tiempo nulo (numero aleatorios)
    n = rand();
    printf("%d\n", n);
    return 0;
    */
    /*
    int  n;
    srand(time(NULL)); //semilla de tiempo nulo (numero aleatorios)
    n = rand() % 10 + 1; // 10 numero max y 1
    printf("%d\n", n);
    */


 // Poner 10 numero al azahar con la funcion azar

    int i, a[10];
    srand(time(NULL));

    for (i = 0; i < 10; ++i)
        a[i] = azar();
    for (i = 0; i < 10; ++i)
        printf("%d\n", a[i]);

    return 0;
}

int azar(void)
{
    return rand() % 100 + 1; // Rango de 1 en uno
}
