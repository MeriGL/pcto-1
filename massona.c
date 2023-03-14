#include <stdio.h>

int main ()
{
int lunghezza;
int lunghezzadue;
int lunghezzatre;

printf("inserisci un numero\n ");
scanf("%d", &lunghezza );

printf("inserisci un secondo numero\n");
scanf("%d", &lunghezzadue );

printf("inserisci un terzo numero\n ");
scanf("%d", &lunghezzatre );

if (lunghezza + lunghezzadue > lunghezzatre && lunghezza + lunghezzatre > lunghezzadue && lunghezzadue + lunghezzatre > lunghezza)
{
printf("è un triangolo\n");
}
else 
{
    printf("non è un triangolo\n");
}

}