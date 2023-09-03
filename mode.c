#include <stdio.h>
int mode(int a[],int n)
{
    int mxcount=0,mxval=0,i,j;
    for(i=0;i<n;i++)
    {
        int count=0;
        for(j=0;j<n;j++)
        {
            if (a[j]==a[i])
                count++;
        }
        if (count > mxcount)
        {
            mxcount=count;
            mxval=a[i];
        }
    }
    return mxval;
}

int main()
{
    //int n=5;
    //int a[]={2,3,5,5,4};
    int n,i;
    printf("Enter a No.of nums in an array :");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe array is :");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nMode is : %d",mode(a,n));
}
