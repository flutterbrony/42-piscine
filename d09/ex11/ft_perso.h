/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 14:41:34 by antmarti          #+#    #+#             */
/*   Updated: 2017/09/08 15:57:15 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef FT_PERSO_H
# define FT_PERSO_H

# include <string.h>

# define SAVE_AUSTIN_POWERS "saved";

typedef struct
{
	char	*name;
	float	life;
	int		age;
	char	*profession;
} t_perso;
#endif
