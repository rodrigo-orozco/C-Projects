// Project 4 - Build a Simple Interest Calculator

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int amount, rate, time, result;
	
	puts("Please, enter the amount:\n");
	scanf("%d", &amount);
	
	puts("Insert the rate:\n");
	scanf("%d", &rate);
	
	puts("Please, insert the time:\n");
	scanf("%d", &time);
	
	result = (amount * rate * time) / 100;
	
	printf("The SI result is: %d", result);
	
	return 0;
}