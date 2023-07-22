/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 22:21:39 by almedetb          #+#    #+#             */
/*   Updated: 2023/07/22 13:41:05 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (s < d)
		while (len--)
			d[len] = s[len];
	else if (s > d)
		while (len--)
			*d++ = *s++;
	return (dst);
}

	// if (src == NULL || dst == NULL)
	// 	return (NULL);
	// d = (unsigned char *)dst;
	// s = (const unsigned char *)src;
	// if (s > d)
	// {
	// 	i = 0;
	// 	while (i < len)
	// 	{
	// 		d[i] = s[i];
	// 		i++;
	// 	}
	// }
	// else if (s < d)
	// {
	// 	i = len;
	// 	while (i > 0)
	// 	{
	// 		d[i - 1] = s[i - 1];
	// 		i--;
	// 	}
	// }
	// return (dst);

// void	*ft_memmove(void *dst, const void *src, size_t len)
// {
// 	size_t i = 0;
// 	if (src > dst)
// 	{
// 		while (len > i)
// 		{
// 			(unsigned char *)dst[i] = (unsigned char *)src[i];
// 			i++;
// 		}
// 	}
// 	else if (src < dst)
// 	{
// 		while (len > 0)
// 		{
// 			(unsigned char *)dst[len - 1] = (unsigned char *)src[len - 1];
// 			len--;
// 		}
// 	}
// }