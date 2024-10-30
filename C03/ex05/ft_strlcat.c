/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:44:08 by bekinci-          #+#    #+#             */
/*   Updated: 2024/02/13 22:59:55 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	ld;
	unsigned int	ls;
	unsigned int	j;

	ld = ft_strlen(dest);
	ls = ft_strlen(src);
	if (ld > size)
		return (size + ls);
	j = 0;
	while (src[j] != '\0' && ld < size -1)
	{
		dest[ld + j] = src[j];
		j++;
	}
	dest[ld + j] = '\0';
	return (ld + ls);
}
