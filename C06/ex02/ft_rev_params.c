/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yblanco- <yblanco-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:14:21 by yblanco-          #+#    #+#             */
/*   Updated: 2024/07/20 13:44:33 by yblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

int     main(int argc, char *argv[])
{
    int     i;
    int     n;

    i = 0;
    n = 0;
    while(argc && argv[argc -1 -n] >= argv[1] )
    {
        if (argv[argc - 1 -n][i] != '\0')
        {
           ft_putchar(argv[argc -1 -n][i]);
           i++;
        }
        else
       	{
            ft_putchar('\n');
            n++;
            i = 0;
        }
    }
}
