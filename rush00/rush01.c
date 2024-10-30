/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 02:26:11 by bekinci-          #+#    #+#             */
/*   Updated: 2024/01/28 06:43:15 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rows(int row, char first, char middle, char last)
{
	int	i;

	i = 1;
	while (i <= row)
	{
		if (i == 1)
		{
			ft_putchar(first);
		}
		else if (i <= row -1)
		{
			ft_putchar(middle);
		}
		else
		{
			ft_putchar(last);
		}
		i++;
	}
	ft_putchar('\n');
}

void	ft_rush( int x, int y)
{
	int	i;

	i = 1;
	while (i < x)
	{
		if (i == 1)
		{
			ft_rows (x, '/', '*', '\\');
		}
		else if (i <= y - 1)
		{
			ft_rows (x, '*', ' ', '*');
		}
		else
		{
			ft_rows (x, '\\', '*', '/');
		}
		i++;
	}
}

int	main(void)
{
	ft_rush(0, 0);
	return (0);
}
