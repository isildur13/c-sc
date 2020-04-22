#include<stdio.h>
#include<stdlib.h>

int main(void){

	FILE *fp;
	FILE *fw;
	char reader[150];

	fp = fopen("file1","r");
	fw = fopen("file2","w+");

	while(!feof(fp)){
	
		fgets(reader,150,fp);
		fputs(reader,fw);
		//printf("%s",reader);
	}

	printf("------------------------\n");
	//printf("%s",reader);

	fclose(fp);




}
