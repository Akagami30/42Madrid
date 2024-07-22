/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yblanco- <yblanco-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 21:02:53 by yblanco-          #+#    #+#             */
/*   Updated: 2024/07/22 19:54:17 by yblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	itt;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	itt = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (itt);
}

/*int     main(void)
{
         int itt;
	itt = 0;
// 	printf("%d", itt); 
         itt = ft_strcmp("\201", "A");   
       printf("%d", itt);
         return(0);
}*/
