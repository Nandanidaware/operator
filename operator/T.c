//T.c
#include<stdio.h>
#include<math.h>
int main()
{
int P,N,I,T,X;
scanf("%d%d%d",&P,&N,&I);
T=(1+I/100);
X=P*pow(T,N);
printf("%d",T);
return 0;
}
