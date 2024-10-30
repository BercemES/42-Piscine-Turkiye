/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:30:52 by bekinci-          #+#    #+#             */
/*   Updated: 2024/02/13 18:53:45 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_totallen(int size, char **strs, char *sep)
{
	int	i;
	int	k;
	int	m;
	int	total_l;

	i = 0;
	total_l = 0;
	while (i < size)
	{
		k = 0;
		while (strs[i][k] != '\0')
		{
			total_l++;
			k++;
		}
		m = 0;
		while (sep[m] != '\0' && i < size - 1)
		{
			total_l++;
			m++;
		}
		i++;
	}
	return (total_l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	int		m;
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_totallen(size, strs, sep) + 1));
	if (size == 0)
		return (str);
	if (!str)
		return (NULL);
	i = 0;
	m = 0;
	while (i < size)
	{
		k = 0;
		while (strs[i][k] != '\0')
			str[m++] = strs[i][k++];
		k = 0;
		while (i < size - 1 && sep[k] != '\0')
			str[m++] = sep[k++];
		i++;
	}
	str[m] = '\0';
	return (str);
}
