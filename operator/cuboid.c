//CUBOID

#include<stdio.h>
int main()
{
	int L,B,H,TS,LS;
	scanf("%d %d %d",&L,&B,&H);
	TS=2*((L*B)+(B*H)+(L*H));
	LS=2*(L+B)*H;
	printf("%d %d",TS,LS);
	return 0;
}	
