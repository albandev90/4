/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 19:38:12 by almedetb          #+#    #+#             */
/*   Updated: 2023/07/22 14:06:41 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*j;

	i = 0;
	j = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			j = (char *)(s + i);
		i++;
	}
	if (c == '\0')
		j = (char *)(s + i);
	return (j);
}

// "hello world"  - print last "o" occuring.