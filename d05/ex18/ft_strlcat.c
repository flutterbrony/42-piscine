/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 08:27:35 by antmarti          #+#    #+#             */
/*   Updated: 2017/09/14 12:36:29 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;
	int				nsize;

	i = 0;
	j = 0;
	nsize = 0;
	while (src[nsize] != '\0')
		nsize++;
	while (dest[i] != '\0')
		i++;
	while (*src != '\0' && j < size)
	{
		dest[i + j] = *src;
		src++;
		j++;
	}
	dest[i + j] = '\0';
	return (nsize + size);
}
