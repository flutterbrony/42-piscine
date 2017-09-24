/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fint_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 12:45:14 by antmarti          #+#    #+#             */
/*   Updated: 2017/09/11 14:29:25 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_next_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (2);
	while (1)
	{
		i = 2;
		while (nb % i != 0)
		{
			i++;
		}
		if (i == nb)
			return (nb);
		else
			nb++;
	}
	return (0);
}
