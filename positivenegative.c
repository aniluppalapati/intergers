#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
    {
        puts("Positive");

    }
    else if(a<0)
    {
        puts("it is Negative");

    }
    else
    {
        puts("Zero");
        return 0;

    }
}
