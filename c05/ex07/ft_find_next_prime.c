/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 17:47:49 by bekinci-          #+#    #+#             */
/*   Updated: 2024/02/10 19:12:20 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_prime_control(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while ((ft_prime_control(nb) == 0))
	{
		if (ft_prime_control(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
	if (ft_prime_control(nb) == 1)
		return (nb);
	return (1);
}
