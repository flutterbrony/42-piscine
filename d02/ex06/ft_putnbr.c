/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 09:35:13 by antmarti          #+#    #+#             */
/*   Updated: 2017/09/03 19:44:45 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int nb)
{
	if (nb < 0)
	{
		ft_putchar(45);
	}
}

void	ft_print_line(int origin, int pow, int nb)
{
	if (nb > 10)
	{
		ft_putchar(nb & 10 + 48);
		ft_print_line(origin, nbr, nb);
	}
	while (0 != origin)
	{
		pow = pow / 10;
		ft_putchar(nb+ 48);
		origin = origin / 10;
		nb = nb - (nb / pow * pow);
	}
}

void	ft_putnbr(int nb)
{
	int origin;
	int size;
	int nbr;

	origin = nb;
	size = 0;
	ft_is_negative(nb);
	nbr = 1;
	while (nb != 0)
	{
		nb = nb / 10;
		size++;
	}
	while (size > 0)
	{
		nbr = nbr * 10;
		size--;
	}
	nb = -1 * origin;
	ft_print_line(origin, nbr, nb);
}
