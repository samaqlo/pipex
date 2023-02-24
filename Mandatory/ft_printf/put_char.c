/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_char.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astalha <astalha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:11:39 by astalha           #+#    #+#             */
/*   Updated: 2023/02/18 14:55:05 by astalha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

void	put_char(char c, int *len)
{
	if (write (1, &c, 1) != 1)
	{
		*len = -1;
		return ;
	}
	(*len)++;
}
