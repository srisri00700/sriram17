#include<stdio.h>
int main()
{
int i,A,N,D,sum=0,value;
printf("\n enter the values of A,N,D");
scanf("%d\t%d\t%d",&A,&N,&D");
value=A;
for(i=0;i<N;i++)
{
sum=sum+value;
value=value+D;
}
printf("\n sumof the arithmetic progression is %d",sum);
return0;
}
