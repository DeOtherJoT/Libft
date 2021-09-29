/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthor <jthor@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 21:41:30 by jthor             #+#    #+#             */
/*   Updated: 2021/09/29 21:41:32 by jthor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*retptr;

	retptr = (char *)malloc(len + 1);
	if (!retptr)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		retptr[i] = s[start];
		i++;
		start++;
	}
	retptr[i] = '\0';
	return (retptr);
}
