/*
Pattern -
*****
 ****
  ***
   **
    *
*/
#include<stdio.h>
int main()
{
    int i, j, n;
    system("CLS");
    printf("Enter no. of rows :"); scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {
        for(j=n ; j>0 ; j--)
        {
            if(j<=n-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}