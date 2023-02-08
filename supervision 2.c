#include<stdio.h>
main()
{
	FILE *p;
	p=fopen("demo1.txt","r");
	char data[100];
	if(p==NULL)
	{
		printf("Could not open file.");
	}
	else
	{
	while(fgets(data,50,p)!=NULL)
	{
		printf("%s",data);
	}
		fclose(p);
	}	
}

