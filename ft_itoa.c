/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 15:11:48 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/12 19:01:25 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

#include <pthread.h>
#include <dlfcn.h>
#include <time.h>
#include <execinfo.h>
#include <locale.h>
#include <sys/mman.h>
#include <errno.h>
#include <time.h>
#include <sys/time.h>
#include <stdarg.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* TEST CODE */
char *reverse(char *str)
{
    char tmp, *src, *dst;
    size_t len;
    if (str != NULL)
    {
        len = strlen (str);
        if (len > 1) {
            src = str;
            dst = src + len - 1;
            while (src < dst) {
                tmp = *src;
                *src++ = *dst;
                *dst-- = tmp;
            }
        }
    }
    return str;
}

void itoa(int n, char s[])
{
    int i, sign;

    if ((sign = n) < 0)        /* record sign */
        n = -n;                /* make n positive */
    i = 0;

    do {                       /* generate digits in reverse order */
        s[i++] = n % 10 + '0'; /* get next digit */
    } while ((n /= 10) > 0);   /* delete it */

    if (sign < 0)
        s[i++] = '-';

    reverse(s);
    s[i] = '\0';
    return;
}
/* END TEST CODE*/

int	ft_countn(int n)
{
	int	ni;
	int	count;

	ni = n;
	count = 1;
	if(n < 0)
	{
		ni = -ni;
		count++;
	}
	if(n == 0)
		return (0);
	while (ni >= 10)
	{
		ni /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*str;
	int		multi;
	
	i = 0;
	multi = 1;
	len = ft_countn(n);
	str = (char *) malloc(len * sizeof(char));
	if(str == 0)
		return (0);
	if(n < 0)
	{
		multi = -multi;
		n = -n;
	}
	while (n > 0)
	{
		str[len--] = n % 10 + '0';
		n /= 10;
		i++;
	}
	str[(len - 1)] = '-';
	
	str[len] = '\0';
	return (str);
}

int main()
{
	int n = -1234;
	char *a = ft_itoa(n);
	printf("Expected:\t%s\nResult:\t\t%s\n", "Nothing?", a);

	for(int i = 0; i < 10; i++)
		printf("%d ", (int) a[i]);
}