#include <stdio.h>
#include <stdint.h>

void printArray(int32_t* const array, size_t n)
{
	int32_t* tempArray = array;

	for(size_t i = 0; i < n; i++){
		printf("%d\n", *tempArray);
		tempArray++;
	}
}
int main()
{
	int32_t array[3] = {1, 2, 3};
	printArray(array, 3);
}

