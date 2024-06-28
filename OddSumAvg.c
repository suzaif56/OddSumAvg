#include <stdio.h>

int main(){

	int n, i, j=1, sum=0, avg;
	
	printf("Enter the nth term for the odd numbers to be listed: ");
	scanf("%d", &n);
		
	for(i=1;i<=n;i++){
		
		if(j%2==0){
			j++;
		}
		printf("%d ", j);
		sum = sum + j;
		j++;
	}
	avg = sum/n ;
	printf("\nThe sum of these odd numbers is: %d", sum);
	printf("\nThe average of these odd numbers is: %d", avg);
	
	return 0;
}
