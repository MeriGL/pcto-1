#include <stdio.h>

int main ()
{
int anno;
printf("quale anno vuoi analizzare");
scanf("%d", &anno);

if((anno % 4 == 0 && anno % 100 != 0) || anno % 400 == 0)
{
    printf("l anno è bisestile!\n");
}
else
{
    printf("l anno non è bisestile!\n");
}
}
