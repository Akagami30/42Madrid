/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yblanco- <yblanco-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 19:22:32 by yblanco-          #+#    #+#             */
/*   Updated: 2024/07/20 19:50:58 by yblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb <= 1)
		return(1);
	else
		return(nb * ft_recursive_factorial(nb - 1));
	return(0);
}

int	main(void)
{
	printf("%d", ft_recursive_factorial(11));
	return(0);
}
