/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 13:39:00 by antmarti          #+#    #+#             */
/*   Updated: 2017/09/02 20:54:38 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_result(char nbr1, char nbr2, char nbr3, char nbr4)
{
	ft_putchar(nbr1);
	ft_putchar(nbr2);
	ft_putchar(32);
	ft_putchar(nbr3);
	ft_putchar(nbr4);
	if (nbr1 == 57 && nbr2 == 56 && nbr3 == 57 && nbr4 == 57)
	{
		ft_putchar(0);
	}
	else
	{
		ft_putchar(44);
		ft_putchar(32);
	}
}

void	ft_print_comb2_2(char nbr1, char nbr2, char nbr3, char nbr4)
{
	nbr1 = 48;
	while (nbr1 <= 57)
	{
		nbr2 = 48;
		while (nbr2 <= 56)
		{
			nbr3 = 48;
			while (nbr3 <= 57)
			{
				nbr4 = nbr2 + 1;
				while (nbr4 <= 57)
				{
					ft_print_result(nbr1, nbr2, nbr3, nbr4);
					nbr4++;
				}
				nbr3++;
			}
			nbr2++;
		}
		nbr1++;
	}
}

void	ft_print_comb2(void)
{
	ft_print_comb2_2(0, 0, 0, 0);
}
