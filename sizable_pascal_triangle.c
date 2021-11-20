#include <stdio.h>
#include <conio.h>

int main(){
	
	int n;
	printf("Enter the size of triangle : ");
	scanf("%d",&n);
	
	int arr[n][n];
	int i, j;
	
	for (i = 0; i<n; i++){
	    for (j = 0; j<n; j++)
	        *(*(arr+i)+j) = 0;
	}
	
	int row = 2, col;
	
	*(*(arr+0)+0) = *(*(arr+1)+0) = *(*(arr+1)+1) = 1;
	
	while(row <= n){
		*(*(arr+row)+0) = 1;
		for(col = 1; col <= row; col++) *(*(arr+row)+col) = *(*(arr+row-1)+col-1) + *(*(arr+row-1)+col);
		row++;
	}
	
	for(i=0;i<n;i++){
		printf("\n");
		for(j=0;j<=i;j++) printf("\t %d",*(*(arr+i)+j));
	}
	getch();
	return 0;
}
