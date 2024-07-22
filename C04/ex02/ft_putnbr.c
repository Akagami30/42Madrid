/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yblanco- <yblanco-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:36:33 by yblanco-          #+#    #+#             */
/*   Updated: 2024/07/18 20:29:20 by yblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <unistd.h>
#include <stdio.h>
  
void	ft_putnbr(int nb)
{
	int	str;
	long int	n;
  
	n = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
 		if (nb < 0)
            	{
			nb = nb * -1;
			write(1, "-", 1);
		}
		while (nb > 0)
		{
			n = n * 10 + nb % 10;
			nb = nb/10;
		}
		 while (n > 0)
          {       
                 str = n % 10 + 48;
               write(1, &str, 1);
                 n = n/10;
          }
	
	
	   
 }
  int     main(void)
{
          ft_putnbr(-2147483648);
          return(0);
}

