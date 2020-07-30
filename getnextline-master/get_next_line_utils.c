/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vo-nguye <vo-nguye@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 13:28:28 by vo-nguye          #+#    #+#             */
/*   Updated: 2019/11/06 00:04:14 by mahmidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_strlen(char	*s)
{
	int		i;

	i =	0;
	while (s[i] != '\0')
		i++;
	return (i);
}


void ft_putchar(char a)
{
	write(1,&a,1);
}

void ft_putstr(char *a)
{
	int i = 0;
	while (a[i] != '\0')
	{
		ft_putchar(a[i]);
		i++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	res = (char *)malloc((ft_strlen((char *)s1) + ft_strlen((char *)s2)));
	if (res == 0)
		return (0);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		res[i + j] = s2[j];
		j++;
	}
	res[i + j ]= '\0';
	return (res);
}
