#include<stdio.h>
 int main(){
 	int x, y, mtp;
 	printf("Enter x:");
 	scanf("%d",&x);
 	printf("Enter y:");
 	scanf("%d",&y);
 	mtp=x;
 	x=y;
 	y=mtp;
 	printf("Swap Success!!!x=%d, y=%d",x,y);
 }
