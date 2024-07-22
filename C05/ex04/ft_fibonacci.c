//#include <stdio.h>

int ft_fibonacci(int index)
{	
	if (index < 0)
		return(-1);	
	if (index > 2)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else if (index == 2)
		return(1);
	else if (index == 1)
		return(1);
	else if (index == 0)
		return(0);
	return(0);
}
/*
int	main(void)
{
	int	count;
	count = 0;

	while (count <= 10)
	{
		printf("%d""%s", ft_fibonacci(count), ", ");
		count++;
	}
	return(0);
}
*/
