/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:22:06 by bekinci-          #+#    #+#             */
/*   Updated: 2024/02/11 14:35:43 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	k = 1;
	while (k < argc)
	{
		i = 0;
		while (argv[k][i] != '\0')
		{
			write(1, &argv[k][i], 1);
			i++;
		}
		write(1, "\n", 1);
		k++;
	}
	return (0);
}
