#include <stdio.h>

void change(int []);

int main(void)
{
	int arr[3] = {1,2,3};

	change(arr);
	printf("Elements are %d, %d and %d.\n",arr[0],arr[1],arr[2]);
	return 0;
}

void change(int my_array[])
{
	my_array[0] = 10;
	my_array[2] = 20;
	return;
}
