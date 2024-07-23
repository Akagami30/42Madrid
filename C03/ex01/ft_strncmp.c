/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yblanco- <yblanco-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 00:35:40 by yblanco-          #+#    #+#             */
/*   Updated: 2024/07/22 20:20:34 by yblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && n > i)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return(0);
}
/*
int	main(void)
{
	int itt;
	
	itt = ft_strncmp("ABLC", "ABLC", 5);
	printf("%d", itt);
	
	return(0);
}
*/
