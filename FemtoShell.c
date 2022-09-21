#include <stdio.h>
#include <string.h>
int main() 
{
char command[100];
int flag = 1;
while(flag == 1)
{
	printf("Please Enter Your Command > ");
	gets(command);
	if (strcmp(command,"exit"))
		{
			printf("You Said : %s \n", command);
		}
	else
		{
			printf("Good Bye \n");
			flag = 0;
		}
}
return 0;	
}
