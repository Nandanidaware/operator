//TV
#include<stdio.h>
int main()
{
	int p,q,r;
	scanf("%d %d",&p,&q);
	r=p+q;
	q=r-q;
	p=r-p;
	printf("%d\n",p);
	printf("%d\n",q);
	return 0;
}
