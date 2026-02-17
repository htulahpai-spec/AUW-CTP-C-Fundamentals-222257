#include <stdio.h>

int main()
{
    int mark;
    scanf("%d",&mark);

    if(mark<0 || mark>100)
        printf("Invalid Mark");
    else if(mark>=80)
        printf("Grade A");
    else if(mark>=70)
        printf("Grade B");
    else if(mark>=60)
        printf("Grade C");
    else if(mark>=50)
        printf("Grade D");
    else
        printf("Grade F");

    return 0;
}
