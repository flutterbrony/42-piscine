/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 13:54:17 by antmarti          #+#    #+#             */
/*   Updated: 2017/09/14 19:13:14 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	if (str[0] > 96 && str[0] < 123)
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	i = 1;
	while (str[i])
	{
		if ((str[i - 1] > 122 || str[i - 1] < 97) && (str[i - 1] > 90 ||
					str[i - 1] < 65) && (str[i - 1] > 57 || str[i - 1] < 48)
				&& (str[i - 1] < 123 && str[i] > 96))
			str[i] -= 32;
		else if ((str[i - 1] > 122 || str[i - 1] < 97)
				&& str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	return (str);
}
