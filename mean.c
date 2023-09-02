
#include <stdio.h>
int mean(int x[]){
    int sum=0,i,c=0;
    int n=5;
    for(i=0;i<n;i++){
        sum+=x[i];
        c++;
    }
    return (sum/c);
}
int main() {
    // int a[]={1,2,3,4,5};
    int i,n;
    printf("Enter Number of nums:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int x=mean(a);
    printf("The mean is:%d",x);
    return 0;
}
