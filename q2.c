#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int match(char mstring[100],char sbstring[100])
{
	int flag=1;
	for(int i=0;i<=strlen(mstring)-strlen(sbstring);i++)
	{
		int j=0;
		while(j<strlen(sbstring)&&mstring[i+j]==sbstring[j])
			j++;
		if(j==strlen(sbstring))
			return i;
	}

	return -1;

}


int main()
{
	char mstring[100];
	char sbstring[100];
	printf("\n Enter string:");
	scanf(" %s",mstring);
	printf("\n Enter substring:");
	scanf(" %s",sbstring);
	int matchvar=match(mstring,sbstring);
	if(matchvar==-1)
		printf("\n The patterns don't match. \n");
	else
	{
		printf("\n The substring starts at position %d",matchvar);
	}

	return 0;
}