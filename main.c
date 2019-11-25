#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int j;
	char input[100];
	FILE *fp1;
	FILE *fp2;
	
	fp1 = fopen("sample.txt", "w");
	for(j = 0; j < 3; j++) {
		printf("input a word : ");
		scanf("%s", input);
		fprintf(fp1, "%s\n", input);
	}
	fclose(fp1);
	printf("\n");
	
	fp2 = fopen("sample.txt", "r");
	for(j = 0; j < 3; j++) {
		fscanf(fp2, "%s", input);
		printf("%s\n", input);
	}
	fclose(fp2);
	
	return 0;
}
