/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yblanco- <yblanco-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:10:22 by yblanco-          #+#    #+#             */
/*   Updated: 2024/07/22 18:19:59 by yblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int     i_len;
	unsigned int     i;
 
	i_len = 0;
	i = 0;
	while (dest[i_len] != '\0')
	i_len++;

	while (i < nb && src[i] != '\0')
	{
		dest[i_len] = src[i];
		i_len++;
		i++;
	}
		return(dest);
}


#include <stdio.h>
int main(void)
{
         char dest[15] = "Hello";
         char src[15] = "World";
//	unsigned int nb = 7;
         printf("String returned by ft_strcat: %s", ft_strncat(dest, src, 2));
        // printf("%s", dest);
}

