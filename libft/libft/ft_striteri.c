/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitriinikiforov <dmitriinikiforov@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:23:01 by dnikifor          #+#    #+#             */
/*   Updated: 2023/12/08 00:40:48 by dmitriiniki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Prototype: void ft_striteri(char *s, void (*f)(unsigned int, char*));

// Turn in files: -

// Parameters: s: The string on which to iterate.
// 			   f: The function to apply to each character.

// Return value: None

// External functs.: None

// Description: Applies the function ’f’ on each character of
// the string passed as argument, passing its index
// as first argument. Each character is passed by
// address to ’f’ to be modified if necessary.

#include "../libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
