#include<stdio.h>

int main()
{
	int a[] = {2,4,6,41,89,91,99};
	int Item =41;
	
	int left,right,middle;
	
	middle = (left+right)/2;
	
	while(left<=right){
		if(a[middle]==Item){
		printf("Item is found at index: %d\n",middle);
	}
	else if(a[middle]<Item){
		left = middle+1;
	}
	else{
		right = middle-1;
	}
	}
	
	printf("Item not found\n");
	
	//Runtime Complexity: O(logN)
	//Space Complexity: O(1)
	
	
	return 0;
}
