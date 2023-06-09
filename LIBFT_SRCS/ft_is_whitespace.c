/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_whitespace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvon-war <lvonwar42@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:33:47 by lvon-war          #+#    #+#             */
/*   Updated: 2023/05/25 16:45:04 by lvon-war         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_whitespace(const char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}
