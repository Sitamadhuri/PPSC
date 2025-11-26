/*write a c program to read and display a character a string and a sentence*/
#include<stdio.h>
int main()
{
	char m;
	char word[15];
	char sentence[45];
	
	scanf("%c",&m);
	scanf("%s\n",&word);
	scanf("%[^\n]",sentence);
	
	printf("Character is %c\n",m);
	printf("word is %s\n",word);
	printf("sentence is %s\n",sentence);
	return 0;
}
