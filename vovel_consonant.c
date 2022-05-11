//program to check whether the entered character is a vowel or consonant

#include<stdio.h>
main()
{
	char ch;
	printf("Enter a Character = ");
	scanf("%c",&ch);
	if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ||ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U')
	printf("%c is Vowel",ch);
	else if((ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z'))
	printf("%c is Consonant",ch);
	else
	printf("%c is Not an Alphabet",ch);
}
