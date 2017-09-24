/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 17:26:16 by antmarti          #+#    #+#             */
/*   Updated: 2017/09/01 13:12:07 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_print_result(char nbr1, char nbr2, char nbr3)
{
	ft_putchar(nbr1);
	ft_putchar(nbr2);
	ft_putchar(nbr3);
	if (nbr1 < 55 && nbr2 <= 56 && nbr3 <= 57)
	{
		ft_putchar(44);
		ft_putchar(32);
	}
	return (0);
}

void	ft_print_comb(void)
{
	char nbr1;
	char nbr2;
	char nbr3;

	nbr1 = 48;
	while (nbr1 <= 55)
	{
		nbr2 = nbr1 + 1;
		while (nbr2 <= 56)
		{
			nbr3 = nbr2 + 1;
			while (nbr3 <= 57)
			{
				ft_print_result(nbr1, nbr2, nbr3);
				nbr3++;
			}
			nbr2++;
		}
		nbr1++;
	}
}
