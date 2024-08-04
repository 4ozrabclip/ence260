#include <stdio.h>
#include <stdint.h>

int main(void)
{
	size_t count = 0;
	int32_t numInput = 0;
	int32_t result[100] = {0};
	do {
		scanf("%d", &numInput);
		result[count] = numInput;
		if(numInput == -1) {
			break;
		}
		count++;
	} while(count < 100);
	printf("%zu numbers entered\n", count);
	for(size_t i = 0; i < count; i++)
	{
		printf("%d\n", result[i]);
	}

	return 0;
}
