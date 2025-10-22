/*
NAME:FAY LILIAN AKINYI
REG NO:PA106/G/28784/25
DATE:22/10/2025
DESCRIPTION:PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO DEGREES
*/

#include<stdio.h>

int main(){
float fahrenheit;
int degree;

printf("Enter the temperatures in fahrenheit:");
scanf("%f",& fahrenheit);	

degree=(fahrenheit-32)*5/9;

printf("Your temperature in degree is:");
printf("%d",degree);

return 0;
	
	
}