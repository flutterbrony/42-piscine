/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 18:23:20 by antmarti          #+#    #+#             */
/*   Updated: 2017/09/07 20:05:39 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int x;

	x = hour;
	if (hour >= 12)
		x = hour % 12;
	if (x == 0 && hour == 12)
		x = 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 0 || hour == 24)
		printf("12 A.M. AND 1.00 A.M.\n");
	else if (hour < 11)
		printf("%d A.M. AND %d A.M.\n", x, x + 1);
	else if (hour == 11)
		printf("%d A.M. AND %d P.M.\n", x, x + 1);
	else if (hour == 12)
		printf("%d P.M. AND %d P.M.\n", x, 1);
	else if (hour <= 23)
		printf("%d P.M. AND %d P.M.\n", x, x + 1);
}
