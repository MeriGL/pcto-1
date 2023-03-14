#include <stdio.h>
int main ()
{

  char sesso;

  printf("utente inserisci il tuo sesso?");
  scanf( " %c", &sesso); 
if(sesso == 'f')
{ 
  printf("femmina\n");
}
  
  else if (sesso == 'm')
  {
    printf("maschio\n"); 
  }
  else if (sesso == 'n')
  {
    printf("non identificato\n");
  }
  else 
  {
    printf("errore\n");
  }
}