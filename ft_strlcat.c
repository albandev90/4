/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 21:08:45 by almedetb          #+#    #+#             */
/*   Updated: 2023/07/22 12:46:32 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned int	des_len;
	unsigned int	j;
	unsigned int	len;
	unsigned int	src_len;

	j = 0;
	if (dstsize == '\0')
		return (ft_strlen(src));
	des_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	len = dstsize - 1;
	if (dstsize > des_len)
	{
		while (src[j] != '\0' && j < (len - des_len))
		{
			dst[des_len + j] = src[j];
			j++;
		}
		dst[des_len + j] = '\0';
		return (src_len + des_len);
	}
	else
		return (src_len + dstsize);
}
