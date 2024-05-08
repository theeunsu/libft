/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eahn <eahn@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:36:52 by eahn              #+#    #+#             */
/*   Updated: 2024/05/08 21:35:53 by eahn             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		front;
	int		rear;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	front = 0;
	rear = ft_strlen(s1) - 1;
	while (front <= rear && ft_strchr(set, s1[front]))
		front++;
	if (front > rear)
		return (ft_strdup(s1 + rear + 1));
	while (ft_strchr(set, s1[rear]) && rear >= 0)
		rear--;
	result = malloc(rear - front + 2);
	if (!result)
		return (NULL);
	ft_strlcpy(result, &s1[front], rear - front + 2);
	return (result);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strtrim("abqbc", "abc"));
// 	printf("%s\n", ft_strtrim("xhelloyz", "xyz"));
// 	printf("%s\n", ft_strtrim("asd123das", "ads"));
// }
