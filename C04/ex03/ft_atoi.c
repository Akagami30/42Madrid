#include <stdio.h>
int	ft_atoi(char *str)
{
	int	convert;
	int	i;
	
	i = 0;
	convert = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		convert = (convert * 10) + str[i];
		i++;
	}
	return(convert);
}
int	main(void)
{
	printf("%di", ft_atoi("0"));
	return(0);
}
