/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 19:07:35 by antmarti          #+#    #+#             */
/*   Updated: 2017/09/07 11:11:31 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int reponse;

	i = 1;
	reponse = 1;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	while (nb >= i)
	{
		reponse *= i;
		i++;
	}
	return (reponse);
}
