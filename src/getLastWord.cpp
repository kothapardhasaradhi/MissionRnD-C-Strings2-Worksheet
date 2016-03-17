/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str)
{
	int i, j, l = 0;
	char *s = (char*)malloc(sizeof(char));
	if (str[0] != ' ')
	{
		s[0] = str[0];
		l = 1;
	}
	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] != '\0')
		{
			if (str[i] != ' ')
			{
				s = (char*)realloc(s, ++l);
				s[l - 1] = str[i];
			}
			else
			{
				for (j = i; str[j] != '\0'; j++)
				{
					if (str[j] == ' ')
						i = j;
					else
					{
						s = NULL;
						s = (char*)malloc(sizeof(char));
						l = 0;
						break;
					}
				}
			}
		}
	}
	s[l] = '\0';
	return s;
}
