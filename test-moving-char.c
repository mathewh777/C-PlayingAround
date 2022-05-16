#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char buf[]= "HE41HE41HE41";
char buff[]= "\x41\x41\x41";


int main(void)
{
	int size = strlen(buf);
	printf("plain-before: %s \n",buf);
	printf("shellcode-after: %s \n\n", buff);
	for(int i; i<=size; i++)
	{
		if (buf[i] == 'H' && buf[i+1] == 'E')
		{
			//i made a fucking "cipher" @moves a char up one@woww FuCKKKKK!!! 
			buf[i]= buf[i] + 3;
			//fucking useless
			//buf[i]='\x41'; 
		}
	}
	printf("shellcode-after: %s \n", buff);
	printf("plain-after: %s \n", buf);
	if (buf[size] == '\0')
        {
                printf("Find: Null Byte\n");
        }
	return 0;
}
