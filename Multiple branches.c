/*
NAME:FAY LILIAN AKINYI
REG NO:PA106/G/28784/25
DATE:28/10/2025
DESCRIPTION:PROGRAM TO SHOW BRANCH OCCUPANCY
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//3D ARRAY:Multiple branches
int main(){
int chain[3][5][10];
int total_occupied=0;
int f,l,n;

printf("Multiple branches occupancy \n");
for(f=0;f<3;f++){
	int branch_occupied=0;
	
	
	for(l=0;l<5;l++){
		
		for(n=0;n<10;n++){
			
			chain[f][l][n]=rand()%2;
			
			if (chain[f][l][n]==1)
				branch_occupied ++;
		}
	}
	
	total_occupied+= branch_occupied;
	printf("Branch %d:: occupied rooms:%d\n",f+1,branch_occupied);
	
}
printf("total occupied rooms across all branches:%d\n",total_occupied);

}	
	
	
	
	
	
	
	
	
