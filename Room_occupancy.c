/*
NAME:FAY LILIAN AKINYI
REG NO:PA106/G/28784/25
DATE:28/10/2025
DESCRIPTION:PROGRAM TO SHOW ROOM OCCUPANCY
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main(){
int occupancy[5][10];
int occupied,vacant;
int i,j;

srand(time(0));

printf("Room occupancy(one branch)\n");
for (i=0;i<5;i++){
occupied=vacant=0;
for(j=0;j<10;j++){
	occupancy[i][j]=rand()%2;
	
	if (occupancy[i][j]==1)
		occupied++;
	else
      	vacant++;
	
}	
printf("Floor %d:occupied=%d,vacant=%d\n",i+1,occupied,vacant);	
	
	
}

	
	
	
	
	
}