/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:19:01 by nouahhab          #+#    #+#             */
/*   Updated: 2021/11/13 16:27:52 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *p, int value, size_t n)
{
    size_t  i;
    unsigned char   *r ;

    r = (unsigned char *)p;
    i = 0;
    //if (!p ) 
       // return (0);
    while (i < n)
        r[i++] = value;
    return (p);
}
/*int main() {

    int array [] = { 54, 85, 20, 63, 21 };
    size_t size = sizeof( int ) * 5;
    int length;
    length = 0;

    ft_memset( array, 0, size );

    while(length<5) 
    {
        printf( "%d ", array[ length ] );
        length++;
    }
 
    return 0;
}
*/

