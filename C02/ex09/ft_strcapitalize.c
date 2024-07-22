/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yblanco- <yblanco-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:30:17 by yblanco-          #+#    #+#             */
/*   Updated: 2024/07/18 17:48:34 by yblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	sw;

	i = 1;
	sw = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (sw == 1 && (str[i] >= 97 && str[i] <= 122))
		{
			str[i] = str[i] - 32;
			sw = 0;
		}
		else
			sw = 0;
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A') || (str[i] > 'Z'
				&& str[i] < 'a') || str[i] > 'z')
			sw = 1;
		i++;
	}
	return (str);
}
/*
 #include <stdio.h>
 int     main(void)
 {       
 char    str[40] = "hola esto 1eSsf-gs2452 una prue3ba";
         printf("%s", ft_strcapitalize(str));
         return(0);
 }
*/
