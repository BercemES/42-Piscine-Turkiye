/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 04:19:26 by bekinci-          #+#    #+#             */
/*   Updated: 2024/02/03 06:48:01 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	if (*b != 0)
	{
		temp = *a;
		*a = *a / *b;
		*b = temp % *b;
	}
}
