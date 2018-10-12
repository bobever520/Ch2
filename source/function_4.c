#include <stdio.h>
#include <stdlib.h>

int Han_Xin_4()
{
	char s1 = 'X';
	char s2 = '-';
	int i, j, temp, temp2;

	temp = 1;
	temp2 = 8;

	printf("(4) \n");

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i < 5) && (i > 0) && (j == temp))
			{
				printf("%c", s1);
			}
			else if ((i > 0) && (i < 5) && (j == temp2))
			{
				temp++;
				printf("%c", s1);
				temp2--;
			}
			else if (i == 0)
				printf("%c", s1);
			else
				printf("%c", s2);

		}
		puts("\n");
	}

	//--------------------------------------------------------------------------------

}