#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers stored as strings
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store result
 * @size_r: Size of buffer r
 *
 * Return: Pointer to the result, or 0 if the result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1, len2, max_len, i, j, sum, carry = 0;

    len1 = strlen(n1);
    len2 = strlen(n2);

    max_len = len1 > len2 ? len1 : len2;

    if (max_len + 1 > size_r)
        return 0;

    r[max_len + 1] = '\0';

    for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
    {
        sum = carry;
        if (i >= 0)
            sum += n1[i] - '0';
        if (j >= 0)
            sum += n2[j] - '0';

        if (sum >= 10)
        {
            carry = 1;
            sum -= 10;
        }
        else
        {
            carry = 0;
        }

        r[max_len--] = sum + '0';
    }

    if (carry)
    {
        r[max_len] = carry + '0';
        return r;
    }

    return r + 1;
}

