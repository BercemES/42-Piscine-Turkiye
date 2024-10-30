/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:24:45 by bekinci-          #+#    #+#             */
/*   Updated: 2024/02/07 09:16:47 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_writehex(unsigned char a)
{
	ft_putchar('\\');
	ft_putchar("0123456789abcdef"[(a / 16)]);
	ft_putchar("0123456789abcdef"[(a % 16)]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	unsigned char	a;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 || str[i] == 127)
		{
			a = (unsigned char)str[i];
			ft_writehex(a);
		}
		else
		{
			a = (unsigned char)str[i];
			ft_putchar(str[i]);
		}
		i++;
	}
}
