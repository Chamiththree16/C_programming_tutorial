#include <stdio.h>

int main()
{
char ch;
char sourcePath[80];
FILE *in_file;

int sr;
printf("Enter file name to copied :\n");
scanf("%s",sourcePath);


in_file =fopen(sourcePath,"r");

if(in_file == NULL)
	printf("can't opean %s for reading \n",sourcePath);

else{
	
	sr=fscanf(in_file,"%c",&ch);
	
	while(sr !=EOF)
		
		{
			printf("%c",ch);
			sr=fscanf(in_file,"%c",&ch);
		}
		fclose(in_file);
	
}
return 0;
}