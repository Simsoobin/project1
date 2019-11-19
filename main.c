#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char src[]="The worst things to eat before you sleep";
	char dst[100];
	int i;
	printf("원문 : %s\n", src);
	for (i=0; src[i] != NULL; i++)
		dst[i]=src[i];
	dst[i]= NULL;
	
	//string(dst; src);
	
	printf("복사본 : %s", dst);
	return 0;
}
