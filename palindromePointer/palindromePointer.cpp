#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int check = 1;
	char str[50];
	char* p, * t;
	printf("Enter string to check palindrome or not ? : ");
	scanf("%s", &str);
	p = str;
	t = str;
	while (*p != '\0') {
		if (*p >= 'A' && *p <= 'Z') {
			*p = *p - 'A' + 'a';
		}
		p++;
	}
	p--;
	while (p >= str) {
		if (*p == *t) {
			printf("\n%c = %c", *p, *t);
		}
		else {
			printf("\n%c != %c", *t, *p);
			check = 0;
			break;
		}
		p--;
		t++;
	}
	printf("\n\n***************");
	if (check == 0)
		printf("\nNot Palindrome");
	else
		printf("\nPalindrome");
	printf("\n***************");
	return 0;
}