/*
NAME:FAY LILIAN AKINYI
REG NO:PA106/G/28784/25
DATE:30/9/25
DESCRIPTION:PROGRAM TO DISPLAY DATA BUNDLE PURCHASE
*/

#include<stdio.h>

int main()
{
	int choice;
	printf("select data bundle \n");
	printf(" 1.100MB @ 50 KES \n");
	printf(" 2.500MB @200 KES \n");
	printf(" 3.1 GB @ 350 KES \n");
	printf(" 4.2 GB @ 600 KES \n");
	
	printf("Enter your choice(1-4):");
	scanf("%d" ,&choice);
	
	switch(choice){
		case 1:
			printf(" You selected 100MB @ 50 KES");
			break;
		case 2:
			printf ("You selected 500MB @200 KES");
			break;
		case 3:
			printf("You selected 1GB @ 350 KES");
			break;
		case 4:
			printf("You selected 2GB @600 KES");
			default:
				printf("invalid choice");
	}
	
	
	
	
	return 0;}
