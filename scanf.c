#include <stdio.h>

int main(void) {
	char name[30];
	int age;
	printf("Please input you name and age:");
	scanf("%29s %i", name, &age);
	printf("My name is %s and age is %i\n",name, age);
	return 0;
}
