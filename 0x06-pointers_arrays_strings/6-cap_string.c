#include "main.h"

/**
 * cap_string - capitalizes words
 * @strr: string
 * Return: pointer to string
 */
char *cap_string(char *str)
{
	int m =0;

	while (str[m])
	{
		while (!(str[m] >= 'a' && str[m] <= 'z'))
			m++;
		if (str[m -1] == ' ' ||
				str[m -1] == ' ' ||
				str[m -1] == '\t' ||
				str[m -1] == '\n' ||
				str[m -1] == ',' ||
				str[m -1] == ';' ||
				str[m -1] == '.' ||
				str[m -1] == '!' ||
				str[m -1] == '?' ||
				str[m -1] == '"' ||
				str[m -1] == '(' ||
				str[m -1] == ')' ||
				str[m -1] == '{' ||
				str[m -1] == '}' ||
				i == 0)
			str[m] -= 32;
		m++;
	}

	return (str);
}
