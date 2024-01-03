/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnikifor <dnikifor@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:20:33 by dnikifor          #+#    #+#             */
/*   Updated: 2024/01/03 23:01:36 by dnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// SYNOPSIS
//	#include <strings.h>
//	void bzero(void *s, size_t n);

// DESCRIPTION
//	The bzero() function writes n zeroed bytes to the string s.  
//	If n is zero, bzero() does nothing.

#include "../../headers/libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
