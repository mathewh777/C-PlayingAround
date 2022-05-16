#include <stdlib.h>
#include <stdio.h> /*printf*/

#define MAXCOUNT 1000000

//Global Var
int arch = 0;



int main(void)
{
	int cpt = 0;
	// Checks if its 32bit or not, 8
	printf("[*] Getting Arch \n");
	if (sizeof(void*) == 4){ arch = 1; }
	if (arch != 1){ printf("[!] Error\n"); exit(0); }
	// a simple sleep loop to wait out av
	for (int i = 0; i < MAXCOUNT; i++)
	{
		cpt++;
	}
	if (cpt == MAXCOUNT)
	{
		printf("end-loop");
	
	}
	return 0;
}
