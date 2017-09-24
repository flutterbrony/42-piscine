/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 17:10:48 by antmarti          #+#    #+#             */
/*   Updated: 2017/09/03 17:49:13 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_combn(int n)
{
	char table[100];
	char nbr[] = "0123456789";
	int i;
	int base;
	int fnl;
	int tmp;

	i = 0;
	tmp = 0;
	fnl = 0;
	base = 10;

	if (n < 0)
	{
		fnl++;
		ft_putchar('-');
	}
	while (n != 0)
	{
		tmp = n % base;
		tmp = (tmp < 0) ? -tmp : tmp;
		table[i] = nbr[tmp];
		n /= base;
	}
	while (i >= 0)
	{
		ft_putchar(table[i]);
		i--;
	}
}
