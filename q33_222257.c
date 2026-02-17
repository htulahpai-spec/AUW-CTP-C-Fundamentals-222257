#include <stdio.h>

int main()
{
    float t;
    scanf("%f",&t);

    if(t<20)
        printf("Cold");
    else if(t<=30)
        printf("Warm");
    else
        printf("Hot");

    return 0;
}
