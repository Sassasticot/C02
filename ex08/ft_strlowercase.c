/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avachero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:56:07 by avachero          #+#    #+#             */
/*   Updated: 2021/07/06 11:58:57 by avachero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowercase(char *str);
{
	char *a;
	a = str;
	while(*str)
	{
		if(*a >= 'A' && *a<= 'z')
			*a += 32;
		a++;
	}
	return(str);
}