/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 05:50:00 by bekinci-          #+#    #+#             */
/*   Updated: 2024/02/08 11:50:23 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	k = 0;
	if (to_find[k] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		while (to_find[k] == str[i + k])
		{
			k++;
			if (to_find[k] == '\0')
			{
				return (str + i);
			}
		}
		k = 0;
		i++;
	}
	return (0);
}
