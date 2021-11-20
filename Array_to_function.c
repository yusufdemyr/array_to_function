#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Initialize functions
void read_array(int*,int n);
int find_small(int*, int n);

int main(){
	
	// Initialize variables
	int* num;
	int n,smallest;
	
	// Size of the array
	printf("\n Enter the size of the array : ");
	scanf("%d",&n);
	
	// Memory allocation for array
	num = (int*)malloc(n*sizeof(int));
	
	// Append value to array
	read_array(num,n);
	
	// Find smallest number in array
	smallest = find_small(num,n);
	
	// Display smallest number of array.
	printf("\n The samllest number in the array is = %d", smallest);
	free(num);
	getch();
	return 0;
}

void read_array(int *arr, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("\n arr[%d] = ",i);
		// Append element of arr[i]
		scanf("%d",&arr[i]);
	}
}

int find_small(int *arr,int n){
	
	int i = 0, small = arr[0];
	// Go through the array until you find the smallest value
	for(i = 1; i < n; i++){
		if(arr[i]<small) small = arr[i];
		// When found make small variable equals to smallest number
	}
	return small;
}
