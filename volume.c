//simple program to calculate the volume and surface area of a cylinder
/*
Name:Fay Lilian Akinyi
Registration no:PA106/G/28784/25
description:program to prompt the user to enter height and radius
*/

#include<stdio.h>

int main(){
	//input variables
	float radius,volume,surface_area,pi;
	int height;
	pi=3.142;
	
	//prompt the user to enter radius
	printf("\n enter radius");
	scanf("%f",& radius);
	printf("\n enter height");
	scanf("%d",& height);
	
	//compute volume
	volume=pi*radius*radius*height;
	
	//compute surface_area
	surface_area=(2*pi*radius*radius)+(2*pi*radius*height);
	
	//pront volume and surface area
	printf("\n volume is %f",volume);
	printf("\nsurface_area is %f",surface_area);
	
		return 0 ;}
	
	
