#include<stdio.h>
#include<math.h>

int main()
{
	int i,N;
	float sum;
	int count;


	printf("Enter total number of terms: ");
	scanf("%d",&N);


	sum=0.0;

	count=1;
	for(i=1;i<=N;i++){
		sum = sum +  ( (float)(pow(count,2)) / (float)(pow(count,3)) );
		count+=2;
	}

    printf("\n1 + 3^2/3^3 + 5^2/5^3 + 7^2/7^3 + ... till N terms (use pow() function)\n");
    printf("-----------------------------------------------------------------------\n");



	printf("Sum of the series is: %f\n",sum);

	return 0;
}
