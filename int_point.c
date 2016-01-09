#include <stdio.h>
#include <stdlib.h>

int main() {
	int nums[] = {1,2,3};
	printf("Nums address is %p,%d\n", nums,(long)nums);
	printf("Nums + 1 address is %p,%d\n", nums + 1,(long)(nums + 1 ));
	printf("Nums[2] is value %i\n", nums[2]);
	printf("*(Nums + 2) is value %i\n", *(nums + 2));
	printf("*(2 + nums) is value %i\n", *(2 + nums));
	printf("2[nums] is value %i\n", 2[nums]);
	return 0;
}
