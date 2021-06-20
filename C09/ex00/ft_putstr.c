/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 23:05:14 by marlean           #+#    #+#             */
/*   Updated: 2021/06/20 16:45:12 by marlean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	l;
	int		i;

	i = 0;
	l = str[i];
	while (str[i] != '\0')
	{
		write(1, &l, 1);
		i++;
		l = str[i];
	}
}
