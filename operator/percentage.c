//PERCENTAGE
#include<stdio.h>
int main()
{
	int H,M,E,G,S;
	scanf("%d %d %d %d %d",&H,&M,&E,&G,&S);
	int T=H+M+E+G+S;
	float A=T/5.0;
	printf("%.2f %%",A);
	return 0;
}
