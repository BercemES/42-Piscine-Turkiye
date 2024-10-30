/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 00:03:25 by bekinci-          #+#    #+#             */
/*   Updated: 2024/02/13 18:53:36 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*str;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	str = (int *) malloc(size * sizeof(int));
	if (str == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		str[i] = min + i;
		i++;
	}
	*range = str;
	return (i);
}
