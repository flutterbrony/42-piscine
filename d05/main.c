/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 18:46:57 by antmarti          #+#    #+#             */
/*   Updated: 2017/09/14 19:49:04 by antmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//void			ft_putstr(char *str);
//void			ft_putnbr(int nb);
//int			ft_atoi(char *str);
//char			*ft_strcpy(char *dest, char *src);
//char			*ft_strncpy(char *dest, char *src, unsigned int);
//char			*ft_strstr(char *str, char *to_find);
//int				ft_strcmp(char *s1, char *s2);
//int				ft_strncmp(char *s1, char *s2, unsigned int n);
//char		*ft_strcapitalize(char *str);
//char			*ft_strupcase(char *str);
//char			*ft_strlowercase(char *str);
//int			ft_str_is_uppercase(char *str);
//int			ft_str_is_lowercase(char *str);
//char			*ft_strcat(char *dest, char *src);
char			*ft_strncat(char *dest, char *src, int nb);
//unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int		main()
{
//	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
//	char *to_find;
//	char *s1;
//	char *s2;
	char dest[100] = "bonjour,";
	char src[] = "Maurice a mal a la dent";

//	s1 = "Bonjour, comment ca va ?";
//	s2 = "Bonjour, connent ca va ?";
//	char str[] = "Bonjour, comment ca va ? 42 Quarante+et-un 1o";
//	char str[] = "";
//	to_find = "abc";
//	dest = "bonjour,";
//	src = "Maurice a mal a la dent.";
//	ft_putstr(str);
//	ft_putnbr(-42);
//	ft_atoi();
//	printf("%s\n", strcpy(dest, src));
//	printf("%s\n", ft_strcpy(dest, src));
//	printf("%s\n", ft_strncpy(dest, src, 15));
//	printf("%s\n", strncpy(dest, src, 15));
//	printf("%s\n", ft_strstr(str, to_find));
//	printf("%s\n", strstr(str, to_find));
//	printf("%d\n", strcmp(s1, s2));
//	printf("%d\n", ft_strcmp(s1, s2));
//	printf("%d\n", ft_strncmp(s1, s2, 15));
//	printf("%d\n", strncmp(s1, s2, 12));
//	printf("%s\n", ft_strupcase(str));
//	printf("%d\n", ft_strlowercase(str));
//	printf("%s\n", ft_;
//	printf("%s\n", ft_strlowcase(str));
//	printf("%s\n", ft_strcapitalize(str));
//	printf("%d\n", ft_str_is_uppercase(str));
//	printf("%d\n", ft_str_is_lowercase(str));
//	printf("%s\n", ft_strcat(dest, src));
//	printf("%s\n", strcat(dest, src));
	printf("%s\n", ft_strncat(dest, src, 50));
//	printf("%s\n", strncat(dest, src, 5));
//	printf("%lu\n", strlcat(dest, src, 15));
//	printf("%u\n", ft_strlcat(dest, src, 15));

}

// reprendre lexo 4
// reprendre le || dnas le strncmp et verifier si ca fonctionne bien.
//corriger le strlowercase et reprendre les noms des focntions
//int     ft_tr_is_lowercase(char *str)
// reprendre le cas pour strncat si n < dest
