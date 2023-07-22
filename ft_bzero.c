/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almedetb <almedetb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 20:23:19 by almedetb          #+#    #+#             */
/*   Updated: 2023/07/21 20:48:12 by almedetb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int	main(void)
// {
// 	char	buffer[100];

// 	// Initialize the buffer with some data
// 	strcpy(buffer, "Hello, this is a test.");

// 	printf("Before ft_bzero: %s\n", buffer);

// 	// Call ft_bzero to zero out the buffer
// 	ft_bzero(buffer, strlen(buffer));

// 	printf("After ft_bzero: %s\n", buffer);

// 	return (0);
// }
