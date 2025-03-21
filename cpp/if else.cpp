#include<stdio.h>
#include<conio.h>

int main()
{
	char ch;
	int num;
	printf("____________________________________________________________________________________________________________");
	printf("\nPRESS");
	printf("A. to enter the name\n  B.to enter the address\n  C.to entee the number\n");
	if(ch=='A')
	{
		printf("enter the name ");
		scanf("%c",&ch);
		printf("the name is saved successfully");
	}
	
	else if(ch=='B')
	{
		printf("enter the address =\n");
		scanf("%c",&ch);
		printf("the address is saved successfully");
	}
	
	else if(ch=='c')
	{
		printf("Enter the number =\n");
		scanf("%d",&num);
		printf("number saved successfully\n");
	}
	
	printf("\nprogram executed successfully.........");
	return 0;	
}
