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
 
    int Arr[] = { 1,3,4,5 };
    // variable to store the size of Arr
    // int length = *(&Arr+1)-Arr;   //*(&Arr + 1) - Arr;
    /* int arr_length(int arr[])
       {
       int i;
       int count = 0;
       for(i=0; arr[i]!='\0'; i++)
       {
           count++;
       }
       return count;
       }                    */
     
    printf( "Number of elements in Arr[] is: %d", length);
    return 0;
}
