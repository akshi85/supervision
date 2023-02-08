#include<stdio.h>
main()
{
	FILE *P;
	P=fopen("demo.txt","w");
	char data[1000];
	if(P==NULL)
	{
		printf("open file");
	}
	else
	{
		printf("enter the data=");
		gets(data);
		fputs(data,P);
		printf("file open succesfully");
		fclose(P);
	}
}
