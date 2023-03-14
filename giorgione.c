#include <stdio.h>
int main ()
{

  int eta;

  printf("utente inseriscila tua età?");
  scanf( "%d", &eta); 
  if( eta > 18)
{ 
  printf("sei minorenne\n");
}
  
  else if (eta == 18)
  {
    printf("sei appena diventato maggiorenne\n"); 
  }
  else
  {
    printf("hai piu di 18 anni\n");
  }
}