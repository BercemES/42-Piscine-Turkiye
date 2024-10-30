/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 10:55:53 by bekinci-          #+#    #+#             */
/*   Updated: 2024/02/05 17:53:39 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] >= 65 && str[i] <= 90))
		{
			str[i] += 32;
		}
		i++;
	}
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int	flag;
	int	i;

	ft_lowercase(str);
	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (flag == 1)
			{
				str[i] -= 32;
				flag = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			flag = 0;
		else
			flag = 1;
		i++;
	}
	return (str);
}
