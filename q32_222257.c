#include <stdio.h>

int main()
{
    int age;
    scanf("%d",&age);

    if(age<0)
        printf("Invalid Age");
    else if(age<=12)
        printf("Child");
    else if(age<=19)
        printf("Teen");
    else if(age<=59)
        printf("Adult");
    else
        printf("Senior");

    return 0;
}
