/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:35:52 by almedetb          #+#    #+#             */
/*   Updated: 2023/07/20 18:15:33 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	unsigned int	i;
	int				len;

	len = destsize - 1;
	i = 0;
	while (src[i] != '\0' && len > 0)
	{
		dest[i] = src[i];
		len--;
		i++;
	}
	if (destsize != '\0')
	{
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
int	main(void) {
    char dest[10];
    const char *src = "Hello, world!";
    
    // Copy the string from src to dest using ft_strlcpy
    size_t len = ft_strlcpy(dest, src, sizeof(dest));
    
    printf("Copied string: %s\n", dest);
    printf("Length of copied string: %zu\n", len);
    
    return (0);
}
*/