/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yblanco- <yblanco-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:12:32 by yblanco-          #+#    #+#             */
/*   Updated: 2024/07/20 20:26:22 by yblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_recursive_power(int nb, int power)
{
	if (power <= 0)
		return(1);
	else
		return(nb * ft_recursive_power(nb, power-1));
}

int	main(void)
{
	int	nb;
	int	power;
	nb = 2;
	power = 3;

	printf("%d", ft_recursive_power(nb, power));
}
