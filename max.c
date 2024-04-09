#include "binary_trees.h"

/**
 * max - get the maxium between two numbers
 * @fir: first operand
 * @sec: second operand
 * Return: the maximum value
 */

size_t max(size_t fir, size_t sec)
{
    if (fir >= sec)
    {
        return fir;
    }
    return sec;
}
