/*
NAME:FAY LILIAN AKINYI
REGISTRATION NO:PA106/G/28784/25
DATE:7/10/2025
*/

#include<stdio.h>

int main(){
	int password;
	
	do{
		printf("Enter your password: ");
		scanf("%d", &password);
		
		if (password !=1234){
			printf("Please try again! \n");
		}
	}while (password !=1234);
	
	printf("Access granted \n");
	
	return 0;
}
