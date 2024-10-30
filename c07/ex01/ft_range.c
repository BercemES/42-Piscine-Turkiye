/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 21:59:01 by bekinci-          #+#    #+#             */
/*   Updated: 2024/02/13 18:53:27 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	size = (max - min);
	dest = (int *)malloc(size * sizeof(int));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
