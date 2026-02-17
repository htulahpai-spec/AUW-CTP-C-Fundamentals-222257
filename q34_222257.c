#include <stdio.h>

int main()
{
    int age,citizen;
    scanf("%d %d",&age,&citizen);

    if(age>=18)
    {
        if(citizen==1)
            printf("Eligible to Vote");
        else
            printf("Not Eligible (Not Citizen)");
    }
    else
        printf("Not Eligible (Under Age)");

    return 0;
}



