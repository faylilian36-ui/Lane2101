/*
NAME:FAY LILIAN AKINYI
REG NO:PA106/G/28784/25
DATE:30/9/2025
DESCRIPTION:PROGRAM TO DISSPLAY EXAM ELLIGIBILITY
*/

#include<stdio.h>

int main(){
	int attendance,average_marks;
	
	// prompt the user to enter attendance
	printf("enter the attendance:");
	scanf("%d",&attendance);
	
	//prompt the user to enter the average marks
	printf("enter the average_marks:");
	scanf("%d",& average_marks);
	
	if(attendance>=75 && average_marks>=40){
	printf("elligible \n");
	}
	else
	{
	printf("not elligible \n");
	}
	
	return 0;}
	
	
	
	
	
	
