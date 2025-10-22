/*
NAME:
REG NO:
DATE:
DESCRIPTION:
*/

#include<stdio.h>

int main(){
	
int calculate_waterbill(int units){
	int billpaid;
	if( units<=100){
		billpaid=(units*10);
	}
	
	else if(units> 100 && units<=200){
		billpaid =1000+(units-100)*15;
	}
	
	else{
		billpaid= 2500+(units-200)*15;
	}
	
	return billpaid;	
}

int main(){
	int units;
	int bill;
	
	printf("Enter the units consumed:");
	scanf("%d",& units);
	
	bill= calculate_waterbill(units);
	
	printf("The total bill is %d",bill);
	
	return 0;
	
}