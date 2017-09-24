/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 14:15:17 by antmarti          #+#    #+#             */
/*   Updated: 2017/09/13 14:40:38 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int s;
	int d;

	d = 0;
	s = 0;
	while (dest[s] != '\0')
		s++;
	while (src[d] != '\0')
	{
		dest[s] = src[d];
		s++;
		d++;
	}
	dest[s] = '\0';
	return (dest);
}