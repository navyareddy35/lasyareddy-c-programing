#include<stdio.h>
int main(){
	int m,n,t;
	scanf("%d %d",&m,&n);
	t=m;
	m=n;
	n=t;
	printf("%d %d",m,n);
	return 0;
}
