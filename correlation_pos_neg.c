#include<stdio.h>
#include<math.h>
float mean(float a[],int n){
    float sum=0.0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum/n;
}

float prod(float a[],float b[],int n)
{
    float sum=0.0;
    for (int i=0;i<n;i++){
        sum+=a[i]*b[i];
    }
    return sum;
}

int main()
{
    float age[50],fat[50];
    float xbar,ybar,xy,xx,yy,cov,r;
    double sigma_x,sigma_y;
    int n,i;
    printf("\n Enter the no.of observations :");
    scanf("%d",&n);
    printf("\n Enter the obs of AGE :\n");
    for (i=0;i<n;i++)
    {
        scanf("%f",&age[i]);
    }
    printf("\n Enter the obs of FAT :\n");
    for (i=0;i<n;i++)
    {
        scanf("%f",&fat[i]);
    }
    
    xbar=mean(age,n);
    ybar=mean(fat,n);
    xy=prod(age,fat,n);
    xx=prod(age,age,n);
    yy=prod(fat,fat,n);
    cov= ((xy/n)-xbar*ybar);
    
    sigma_x=sqrt((xx/n)-xbar*xbar);
    sigma_y=sqrt((yy/n)-ybar*ybar);
    
    r= cov/(sigma_x*sigma_y);
    printf("%f",r);
    if (r>0.0)
        printf("\n Positively correlated");
    else
        printf("\n negatively correlated");
}