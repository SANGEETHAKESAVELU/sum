#include <stdio.h>
int add(int,int,int);

int main(void) 
{
    int a,b,c,i,sum,sum1,array[3],s=0;
    printf("\nenter three variables");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    printf("\nsum is :%d",sum);
    
    printf("\nget array \n");
    for(i=0;i<3;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<3;i++)
    {
        s=s+array[i];
    }
    printf("\nsum of array :%d",s);
    
    printf("\nfunction call");
    sum1=add(a,b,c);
    printf("\nsum using function call :%d",sum1);
    return 0;
}

int add(int a,int b,int c)
{
    int z;
    z=a+b+c;
    return z;
}

