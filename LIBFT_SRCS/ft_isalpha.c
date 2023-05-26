/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvon-war <lvonwar42@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:45:38 by lvon-war          #+#    #+#             */
/*   Updated: 2023/05/25 16:45:38 by lvon-war         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	int	is_alpha;

	is_alpha = 1;
	if (c < 'A' || c > 'z' || ((c > 'Z') && (c < 'a')))
	{
		is_alpha = 0;
	}
	return (is_alpha);
}