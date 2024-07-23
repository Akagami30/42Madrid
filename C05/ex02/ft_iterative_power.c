/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yblanco- <yblanco-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 19:52:15 by yblanco-          #+#    #+#             */
/*   Updated: 2024/07/22 18:57:51 by yblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	power_number;
	int	total_number;
	if (power == 0)
		return(1);
	if(nb < 0 &&  power < 0) // if power < 0 take a long time (?)
		return(0);
	power_number = 1;
	total_number = nb;
	while (power_number != power)
	{
		total_number = total_number * nb;
		power_number++;
	}
	return(total_number);
}
/*
int	main(void)
{

//	ft_iterative_power(3, 3);
	printf("%d", ft_iterative_power(2, -1));
}
*/
