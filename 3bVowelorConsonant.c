#include<stdio.h>
void main()
{
	char ch;
	printf("Enter the Alphabhet:-\n");
	scanf("%c",&ch);

	if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E'
		|| ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O'
		|| ch == 'u' || ch == 'U') {

		printf("The Alphabet %c is a vowel.\n", ch);
	}
	else {
		printf("The Alphabet %c is a consonant.\n", ch);
	}
}