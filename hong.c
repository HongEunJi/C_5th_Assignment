#include <stdio.h> 
int main() 
{ 
	int i,j;
	double a[51][51]={0,1}; 
 
 	a[1][1]=1; 
  
 	for(i=2; i<=50; i++) {
		for(j=1; j<=i; j++) 
			a[i][j] = a[i-1][j-1] + a[i-1][j]; 
	} 
  
 	for(i=1; i<=50; i++) {
 		for(j=1; j<=i; j++) 
 			printf("%.0f  ",a[i][j]); 
		printf("\n"); 
	} 
   
 	return 0; 
} 
