#include <stdio.h>

int main ()
{
int l;
int ldue;
int ltre;

printf("inserisci un numero\n ");
scanf("%d", &l );

printf("inserisci un secondo numero\n");
scanf("%d", &ldue );

printf("inserisci un terzo numero\n ");
scanf("%d", &ltre );



if ((l + ldue > ltre)&&(l + ltre > ldue)&&(ldue + ltre > l)&& (l == ldue == ltre))
{
printf("è un triangolo equilatero\n");
}
else if (((l + ldue > ltre)&&(l + ltre > ldue)&&(ldue + ltre > l)&&((l == ldue))&&(l != ltre))||((l == ltre)&&(l != ldue))||((ldue == ltre)&&(ldue != l)))
{
printf("è un triangolo isoscele\n");
}
else if((l + ldue > ltre)&&(l + ltre > ldue)&&(ldue + ltre > l)&&(l != ldue != ltre))
{
printf("è un triangolo scaleno\n");
}
else 
{
    printf("non è un triangolo\n");
}

}