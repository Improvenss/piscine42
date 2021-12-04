#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

int	main()
{
	int i;
	char	str2[] = "gorkem";
	i = ft_strlen(str2);
	char c;
	c = i + '0';
	write(1, &c, 1);
}
