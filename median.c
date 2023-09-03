
#include <stdio.h>
int sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if (a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    return a;
}
int main() 
{
    // int a[]={5,3,4,2,1,6,7,8};
    int n,i;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements:\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    // int n=sizeof(a)/sizeof(a[0]);
    // int n;
    // printf("Enter the size of array ");
    // scanf("%d",&n);
    sort(a,n);
    if (n%2!=0)
    {
        n=(n+1)/2-1;
        printf("The Median of the given data is :%d",a[n]);
    }
    else 
        {
            n=((n/2-1)+(n/2))/2;
            printf("The Median of the given data is :%d",a[n]);
        }
}
