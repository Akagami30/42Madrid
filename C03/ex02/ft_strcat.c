/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yblanco- <yblanco-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:56:29 by yblanco-          #+#    #+#             */
/*   Updated: 2024/07/22 19:58:20 by yblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i_len;
	int	i;

	i_len = 0;
	i = 0;
	while (dest[i_len] != '\0')
		i_len++;
	while (src[i] != '\0')
	{
		dest[i_len + i] = src[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
int main(void)
{
	char dest[15] = "Hello";
	char src[15] = "Wo";
	printf("String returned by ft_strcat: %s", ft_strcat(dest, src));
	
}*/
