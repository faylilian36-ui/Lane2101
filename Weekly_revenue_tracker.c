// Program to display weekly revenue
/*
NAME:FAY LILIAN AKINYI
REG NO:PA106/G/28784/25
DATE:28/10/2025
DESCRIPTION:PROGRAM TO SHOW WEEKLY REVENUE
*/

#include<stdio.h>

int main(){
float revenue[7];
float total_revenue=0;
float average_revenue;
int i;

printf("Weekly revenue tracker \n");
for(i=0;i< 7;i++){
	printf("Enter revenue for day %d:",i+1);
	scanf("%f",& revenue[i]);
	total_revenue += revenue[i];
}
average_revenue=total_revenue/7;

printf("Total weekly revenue: %.2f\n",total_revenue);
printf("Average daily revenue: %.2f\n",average_revenue);

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}