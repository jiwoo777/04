#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	int min, sec;
		
	printf("input the second :");
	scanf("%i", &a);
	
	min=a/60;
	sec=a%60;
	
	printf("the time is %i : %i\n", min, sec);
	
	
	return 0;
}
