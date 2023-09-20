#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,b,k;
    printf("Enter the no.of ELements: ");
    scanf("%d",&n);
    printf("Enter the bin length :");
    scanf("%d",&b);
    k= n/b;
    int l[k][b];
    float mean[b];
    printf("Enter the %d elements",n);
    for(int i=0;i<k;i++){
        for (int j=0;j<b;j++){
            scanf("%d",&l[i][j]);
        }
    }
    for (int i=0;i<k;i++)
    {
        float sum=0;
        for (int j=0;j<b;j++){
            sum+=l[i][j];
        }
        mean[i]=sum/b;
    }
    
    for (int i=0;i<k;i++)
    {
        for (int j=0;j<b;j++)
        {
            printf("%.2f",mean[j]);
        }
        printf("\n");
    }
}
