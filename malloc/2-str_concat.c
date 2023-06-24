#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int j,i,k;

	i = 0;
	k = 0;

	j = (strlen(s1) + strlen(s2));
	s3 = (char*)malloc(sizeof(char) * j);

	while (s1[i] != '\0')
	{
		s3[i] = s1[i];		
		i++;
	}
	while (s2[k] != '\0')
	{
		s3[i] = s2[k];
		i++;
		k++;
	}
	s3[i + 1] = '\0';
	return (s3);
}

int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
