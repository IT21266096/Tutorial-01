#include<stdio.h>

int main(){
	
	int sub01, sub02;
	float avg;
	
	printf("Enter stuent mark 01: ");
	scanf("%d", &sub01);
	
	printf("Enter stuent mark 02: ");
	scanf("%d", &sub02);
	
	avg = (sub01 + sub02) / 2;
	
	printf("Average : %.1f\n", avg);
	
	return 0;
}
