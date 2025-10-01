/*
NAME:FAY LILIAN AKINYI
REG NO:PA106/G/28784/25
DATE:30/9/25
DESCRIPTION:PROGRAM TO CALCULATE THE WATER BILL
*/

#include<stdio.h>

int main(){
	int units;
	float charges;
	
	//prompt the user to enter the number of water units consumed
	printf("enter the number of units consumed:");
	scanf("%d",&units);
	
	if(units>=0 &&units<=30){
		charges=20;
	}
	else if (units >=31 &&units <=60){
		charges=25;
	}
	else if(units>60){
		charges=30;
	}
	printf("\nTotal bill: %.2f KES" ,charges);
	return 0;
}