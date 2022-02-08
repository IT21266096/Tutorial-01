#include<stdio.h>

int main(){
	
	int n, i = 0;
	
	printf("Enter number of n:");
	scanf("%d", &n);
	
	int total = 0;
	
	while(i <= n){
		total += i;
		i++;
	}
	
	printf("Total: %d\n", total);
	
	return 0;
}
