
#include <stdio.h>

int main()
{
    float i;
    printf("Give an input : ");
    scanf("%f" , &i);

    if(i>0)
        printf ("Positive Real Number \n");
    else if (i<0)
        printf ("Negative Real Number \n");
    else
        printf("Zero \n");

    if(i>1)
        {
          printf("Natural Number \n");
        }
    else
        printf("Not Natural Number \n");


        return 0;

}
