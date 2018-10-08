/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 20:08:23 by faguilar          #+#    #+#             */
/*   Updated: 2018/09/22 21:59:25 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if ( index < 0)
		return -1;
	else if (index == 0)
		return 0;
	else if (index == 1)
		return 1;
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index-2));
}
