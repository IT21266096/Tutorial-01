#include<stdio.h>

int main(){
	
	
	float distence, amount;
	
	printf("Enter van has travelled : ");
	scanf("%f", &distence);
	
	if(distence > 30){
		amount = 30 * 50 + (distence-30) * 40;
	}
	
	else{
		amount = distence * 50;
	}
	
	printf("Your amount : %.2f\n", amount);
	
	return 0;
	
}
