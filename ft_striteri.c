/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:06:26 by eahn              #+#    #+#             */
/*   Updated: 2024/05/06 00:07:19 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int i, char *))
{
	unsigned int	i;

	i = 0;
	while (*s)
		f(i++, s++);
}

// void	function(unsigned int i, char *c)
// {
// 	*c += i;
// }
// int	main(void)
// {
// 	char	str[] = "aaaaaa";

// 	ft_striteri(str, &function);
// 	printf("%s\n", str);
// 	return (0);
// }
