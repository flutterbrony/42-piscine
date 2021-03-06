/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 14:06:36 by antmarti          #+#    #+#             */
/*   Updated: 2017/09/14 11:36:50 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 48 && str[i] >= 57)
			return (0);
		i++;
	}
	return (1);
}
