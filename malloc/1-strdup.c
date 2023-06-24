#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* _strdup(char *str)
{
	char* s;
	int i;
	
	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		s = (char*)malloc(sizeof(char) * (strlen(str)));
		while (str[i])
		{
			s[i] = str[i];
			i++;
		}
		if (s == NULL)
			return (NULL);
		else
		{
			return (s);
			free(s);
		}
	}
}

int main(void)
{
    char *s;
    char j[] = "ALX SE";

    s = _strdup(j);
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
