/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukwon <eukwon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 12:18:17 by eukwon            #+#    #+#             */
/*   Updated: 2022/10/03 15:46:37 by eukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ret_mem;

	ret_mem = (char *)malloc(count * size);
	if (ret_mem == NULL)
		return (NULL);
	ft_bzero(ret_mem, count * size);
	return ((void *)ret_mem);
}