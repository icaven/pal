/**
 *
 * Frees up resources occupied by 'mem'.
 *
 * @param mem Memory object descriptor (int)
 *
 * @return    Returns 0 if successful.
 *
 */
#include <stdio.h>
#include "pal_base.h"
#include "pal_base_private.h"

int p_free(int mem)
{
    printf("Running p_free(%d)\n", mem);
    return (0);
}