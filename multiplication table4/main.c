#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=1;i<10;i++)
    {
        for(j=1;j<10;j++)
        {
            if(i>=10-j)
            {
                printf("%d*%d=%-4d",10-j,i,(10-j)*i);
            }
            else
            {
                printf("        ");
            }
        }
        printf("\n");
    }
}
