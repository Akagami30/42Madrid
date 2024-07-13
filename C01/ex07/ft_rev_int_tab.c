/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yblanco- <yblanco-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:38:22 by yblanco-          #+#    #+#             */
/*   Updated: 2024/07/13 13:57:03 by yblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab int size)
{
	int	i;
	int	ilen;

	tab = 0;
	size = 0;
	i = 0;
	while (tab[i] < (size / 2))
	{
		aux = tab[i];
		tab[i] = tab [size - 1 - i];
		tab [size - 1 - i] = aux;
		i++;
	}
}
