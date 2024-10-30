/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:36:22 by bekinci-          #+#    #+#             */
/*   Updated: 2024/02/11 14:40:35 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	k = argc - 1;
	while (k > 0)
	{
		i = 0;
		while (argv[k][i] != '\0')
		{
			write(1, &argv[k][i], 1);
			i++;
		}
		write(1, "\n", 1);
		k--;
	}
	return (0);
}