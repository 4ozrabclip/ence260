#include <stdio.h>
#include <stdint.h>

void copyArray(const int32_t* src, int32_t* dest, size_t n)
{
	int32_t* destptr = dest;

	for(size_t i = 0; i < n; i++)
	{
		destptr[i] = src[i];

	}
}
int main(void)
{
	const int32_t array1[3] = {1, 2, 3};
	int32_t array2[3] = {0};
	copyArray(array1, array2, 3);
	printf("%d\n", array2[0]);
	printf("%d\n", array2[1]);	
	printf("%d\n", array2[2]);
}

