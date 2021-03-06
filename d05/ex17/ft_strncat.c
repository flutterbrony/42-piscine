/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 21:11:59 by antmarti          #+#    #+#             */
/*   Updated: 2017/09/14 19:48:05 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int s;
	int d;

	s = 0;
	d = 0;
	while (dest[d] != '\0')
		d++;
	while (src[s] != '\0' && 0 < nb)
	{
		dest[d] = src[s];
		nb--;
		d++;
		s++;
	}
	dest[d + s] = '\0';
	return (dest);
}
