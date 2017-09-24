/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 09:50:25 by antmarti          #+#    #+#             */
/*   Updated: 2017/09/08 15:53:23 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *string)
{
	write(1, &*string, 9);
}

int		ft_strcmp(char *str1, char *str2)
{
	while (*str1 || *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}

void	ft_word_count(char *str)
{
	if (ft_strcmp(str, "attack") == 0)
		ft_putchar("Alert!!!\n");
	if (ft_strcmp(str, "powers") == 0)
		ft_putchar("Alert!!!\n");
	if (ft_strcmp(str, "president") == 0)
		ft_putchar("Alert!!!\n");
}

char	ft_format(char *string)
{
	int i;

	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] > 64 && string[i] < 91)
			string[i] += 32;
		i++;
	}
	return (*string);
}

int		main(int argc, char **argv)
{
	char string[9001];
	int i;
	int j;
	int k;

	i = 1;
	while (i < argc)
	{
		j = 0;
		k = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != ' ')
			{
				string[k] = argv[i][j];
				k++;
			}
			j++;
		}
		string[j] = '\0';
		ft_format(string);
		ft_word_count(string);
		i++;
	}
	return (0);
}
