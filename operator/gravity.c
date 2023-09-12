//GRAVITY
#include<stdio.h>
int main()
{
	float T;
	scanf("%f",&T);
	int l;
	scanf("%d",&l);
	float g=(4*3.14*3.14*l)/T*T;
	printf("%.2f",g);
	return 0;
}

