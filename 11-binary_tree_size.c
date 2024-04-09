#include "binary_trees.h"

/**
 * binary_tree_size - gets the size of the tree
 * @tree: the node to get its depth
 * Return: size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t l = 0;
	size_t r = 0;

	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);

	return (r + l + 1);
}
