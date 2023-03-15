#include <stdio.h>
int main ()
{
int x=102; 
int y=0;

while (x >= 0)
{
    x = x-1;
    if(x % 2 == 0)
    {
        y = y + x;
        printf("%d\n", y);
    }
    

}
}
