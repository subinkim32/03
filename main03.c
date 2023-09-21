#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int boonja, boonmo;
	
	printf("input number in the boonja: ");
	scanf("%d", &boonja);
	
	printf("input number in the boonmo: ");
	scanf("%d", &boonmo);
	
	printf("The result of the division is %f\n", (float)boonja/boonmo);
	
	system("PAUSE");
	return 0;
}
