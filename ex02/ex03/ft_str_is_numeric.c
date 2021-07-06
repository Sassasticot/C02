/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avachero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 14:53:55 by avachero          #+#    #+#             */
/*   Updated: 2021/07/04 14:59:18 by avachero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_str_is_numeric(char *str)
{
	while(*str)
		if(str >='0' ||  str <='9')
			return (1);
		str++;
		else 
			return(0);
}