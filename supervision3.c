#include<stdio.h>
main()
{
	FILE *p;
	char data[1000];
	p=fopen("read.txt","a");
	if(p==NULL)
	{
		printf("could not open");
	}
	else
	{
		printf("Enter data=");
		gets(data);
		fputs(data,p);
		printf("line add successfully");
		fclose(p);
	}
	p=fopen("read.txt","r");
	if(p==NULL)
	{
		printf("could not open");
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
 
