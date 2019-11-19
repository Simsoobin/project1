#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[30] = "happy C programming";
	
	printf( "%s : %i\n", str, strlen(str) );
	return 0;
}
