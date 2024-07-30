#include <stdio.h>

int main()
{
	char ch,sourcePath[80], destPath[80];
	FILE *in_file, *out_file;
	int sr;
	
	printf("Enter file name to be copied: \n");
	scanf("%s",sourcePath);
	printf("Enter output filename:\n");
	scanf("%s",destPath);
	
	in_file= fopen(sourcePath,"r");
	
	if(in_file == NULL)
		printf("Can't opean %s for reading. \n",sourcePath);
	else{
		
		out_file = fopen(destPath,"w");
		if(out_file == NULL)
			printf("Can't open %s for writing. \n",destPath);
		else{
			
			sr = fscanf(in_file,"%c",&ch);
			while(sr!= EOF)
			{
				fprintf(out_file,"%c",ch);
				sr =fscanf(in_file,"%c",&ch);
				
			}
			printf("File has been copied.\n");
			fclose(out_file);
		}
		fclose(in_file);
		
	}
	return 0;
	
	
	
}