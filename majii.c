#include <stdio.h>
int main ()
{

  int eta;

  printf("quale è la tua età?");
  scanf( "%d", &eta); 
  printf("il numero e %d\n" , eta);
  
  if( eta > 18)  
  {
    printf("la condizione è verificata\n");
  }
  else
  {
    printf("la condizione non è verificata"); 
  }
}