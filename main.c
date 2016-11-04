#include <stdio.h>
#include <stdlib.h>

int addition(int c, int d)
{
    return c+d;
}

int soustraction(int c, int d)
{
    return c-d;
}

int multiplication(int c, int d)
{
    return c*d;
}


int main()
{
    int a;
    int b;
    int choix;
    printf("Quelle operation ?\n 1. Addition\n 2. Soustraction\n 3. Multiplication\n");
    scanf("%d", &choix);
    printf("Entrez A et B :\n");
    scanf("%d", &a);
    scanf("%d", &b);
        if(choix==1)
    {
        printf("L addition de a et de b vaut %d\n", addition(a,b));
    }
        if(choix==2)
    {
        printf("La soustraction de a par b vaut %d\n", soustraction(a,b));
    }
        if(choix==3)
    {
        printf("La multiplication de a par b vaut %d\n", multiplication(a,b));
    }
    return 0;
}
