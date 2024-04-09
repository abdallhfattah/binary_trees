#include "binary_trees.h"

/**
 * binary_tree_depth - gets the depth of the node
 * @tree: the node to get its depth
 * Return: depth
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
    if (tree == NULL)
	{
		return (0);
	}
    size_t l = 0;
    size_t r = 0;
    l = (tree ? binary_tree_size(tree->left) : 0);
    r = (tree ? binary_tree_size(tree->right) : 0);
    return (r+l+1);
}