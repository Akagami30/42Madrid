/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yblanco- <yblanco-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 00:35:40 by yblanco-          #+#    #+#             */
/*   Updated: 2024/07/22 18:10:48 by yblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int	itt;

	i = 0;
	while((s1[i] == s2[i] && s1[i] != '\0') || ( s2[i] != '\0' && n > i + 1))
	{
		i++;
	}
	itt = (unsigned char)s1[i] - (unsigned char)s2[i];
	return(itt);
}
/*
int	main(void)
{
	int itt;
	
	itt = ft_strncmp("ABLC", "ABAD", 3);
	printf("%d", itt);
	
	return(0);
}*/
