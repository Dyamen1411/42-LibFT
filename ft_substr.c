/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:21:28 by amassias          #+#    #+#             */
/*   Updated: 2023/10/17 19:24:05 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy;

	copy = (char *) malloc(len + 1);
	if (copy)
	{
		ft_memcpy(copy, s + start, len);
		copy[len] = '\0';
	}
	return (copy);
}