#include <stdio.h>

void fortunde_cookie(char msg[]);

int main() {
	char quote[] = "Cookies make you fat.";
	fortunde_cookie(quote);
	return 0;
}

void fortunde_cookie(char msg[]) {
	printf("Message reads: %s\n", msg);
	printf("msg occupies %i bytes\n", sizeof(msg));
}
