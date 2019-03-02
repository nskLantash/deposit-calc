#include <stdio.h>
#include <stdlib.h>

int data_check(int amount, int term);
double calculate_deposit(int amount, int term);

int main()
{
	int amount, term, f;
	
	printf("Enter the amount of money to deposit (10000 or more): ");
	scanf("%d", &amount);
	printf("Enter deposit life (from 1 to 365 days): ");
	scanf("%d", &term);
	
	f = data_check(amount, term);
	
	return 0;
}

int data_check(int amount, int term)
{
    int result = 1;
    if (amount < 10000) {
		printf("You are trying to deposite too little money\n");
		result = 0;
	}
	if (term <= 0 || term > 365) {
		printf("The term is wrong\n");
		result = 0;
	}
	return result;
}

double calculate_deposit(int amount, int term)
{
	int I;
	double sum;
	if (term <= 30) { 
	    I = -10;
	} else if (term <= 120) {
		if (amount <= 100000) {
			I = 2;
		} else {
			I = 3;
		}
	} else if (term <= 240) {
		if (amount <= 100000) {
			I = 6;
		} else {
			I = 8;
		}
	} else {
		if (amount <= 100000) {
			I = 12;
		}
		else {
			I = 15;
		}
	}
	
	sum = (amount * I * term / 365.) / 100.;
	sum += amount;
	return sum;
}
