#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	char name[50];

	scanf("%[^\n]s", name);

	getchar();

	char name2[50];

	fgets(name2, 50, stdin);


	printf("%s\n", name);
	printf("%s\n", name2);

	return 0;
}