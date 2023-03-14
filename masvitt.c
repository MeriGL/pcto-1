#include <stdio.h>

int main ()
{
    int anno; 
    printf("qual è il tuo anno di nascita?");
    scanf("%d", &anno);
    printf("il mio anno di nascita è %d\n", anno);
    if( anno ==1969)
    {
        printf("sei nato nel 1969\n");
    }
    else if (anno < 1969)
    {
        printf( "sei nato %d anni prima del 1969\n", anno+169); 
    }
    else if (anno>1969)
    {
        printf("sei nato %d anni dopo il 1969\n", anno-1969);
    }
    }