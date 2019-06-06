/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfeltz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 22:58:22 by brfeltz           #+#    #+#             */
/*   Updated: 2019/04/23 14:46:54 by brfeltz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*s2;
	int len;

	len = 0;
	while(src[len])
		len++;	
	s2 = (char*)malloc(sizeof(char) * (len + 1));
	if (s2)
		return (ft_strcpy(s2, (char*)src));
	return (0);
}
