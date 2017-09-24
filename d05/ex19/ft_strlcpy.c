/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 08:52:51 by antmarti          #+#    #+#             */
/*   Updated: 2017/09/13 09:05:17 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	int j;
	int nsize;

	i = 0;
	j = 0;
	nsize = 0;
	while (dest)
		dest++;
	while (src[j] != '\0' && size > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		nsize++:
	}
	return (size);
}
