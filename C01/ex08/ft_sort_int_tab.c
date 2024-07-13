/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yblanco- <yblanco-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 13:58:00 by yblanco-          #+#    #+#             */
/*   Updated: 2024/07/13 15:04:52 by yblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	vswitch;
	int	i;

	i = 0;
	while (size >= 0)
	{
		vswitch = 0;
		if (tab[i] > tab[i + i])
		{
			vswitch = tab[1];
			tab[i] = tab[i + 1];
			tab[i + 1] = vswitch;
		}
		i++;
	}
	size--;
}
