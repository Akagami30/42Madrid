/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yblanco- <yblanco-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:52:24 by yblanco-          #+#    #+#             */
/*   Updated: 2024/07/20 19:18:57 by yblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	n;
	int	nt;
	
	nt= 1;
	n = 1;
	if (nb < 0)
		return(0);
	while(nb != '\0')
	{
		//printf("%s", "prueba");
		nt = nt * n;
		n++;
		nb--;
	}
	return(nt);
}

#include <stdio.h>
int main(void)
{
	int	numero;
	numero = -5;
	printf("%d", ft_iterative_factorial(numero));
	return(0);
}
