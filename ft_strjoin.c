/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:25:06 by amassias          #+#    #+#             */
/*   Updated: 2023/10/17 19:27:21 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*cat;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	cat = (char *) malloc(len1 + len2 + 1);
	if (cat)
	{
		ft_memcpy(cat, s1, len1);
		ft_memcpy(cat + len1, s2, len2);
		cat[len1 + len2] = '\0';
	}
	return (cat);
}
