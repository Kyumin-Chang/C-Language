#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char* pc = NULL;
	int i = 0;

	pc = (char*)(malloc(100 * sizeof(char)));

	if (pc == NULL) {
		printf("Failed");
		exit(1);

	}

	*pc = "Hello";
	for (i = 0; i < 26; i++) {
		*(pc + i) = 'a' + i;

	}

	return 0;
}