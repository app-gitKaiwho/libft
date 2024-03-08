/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinvar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvon-war <lvon-war@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:45:46 by lvon-war          #+#    #+#             */
/*   Updated: 2024/03/08 16:28:43 by lvon-war         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>


char	*ft_str_joinvar(int count, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, count);
	while (i < count)
	{
		printf("%d\n", va_arg(args, double));
		i++;
	}
	//i = 0;
	while (i < count)
	{

		printf("%s\n", va_arg(args, char *));
		i++;
	}
	return (NULL);
}

int	main(void)
{
	ft_str_joinvar(4, "!", "haha", 999999, "osaohfd");
}

