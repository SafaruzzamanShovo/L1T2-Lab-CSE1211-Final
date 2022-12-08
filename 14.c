#include<stdio.h>
int main(){
	int n;
	float sum=0,x=1.1;
	scanf("%d",&n);
	for (int i = 1; i <= n; ++i)
	{
		sum += x*x;
		x += 1.2;
	}
	printf("%0.2f\n", sum);
}
