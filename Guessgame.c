/*
NAME:FAY LILIAN AKINYI
REGISTRATION NO:PA106/G/28784/25
DATE:7/10/2025
DESCRIPTION;GUESSING GAME
*/

#include<stdio.h>

int main(){
	int secret_number=15;
	int guess;
	int attempts=0;
	
	printf("Welcome to Fay's guessing game \n");
	printf("Think of a number betweemn 1-20.\n");
	
	while(guess !=secret_number){
		printf("Enter your guess: ");
		scanf("%d", &guess);
		attempts++;
		
		if(guess>secret_number){
			printf("Too high!\n");
		}
		else if ("guess<secret_number"){
			printf("Too low!\n");
	}
	else {
		printf("Congratulations!\n");
		printf("It took you %d attempts \n",attempts);
	}
	while (guess!=secret_number);

	return 0;}
}
