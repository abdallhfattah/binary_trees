#include "binary_trees.h"
/**
 * binary_tree_nodes - count the number of nodes have one child at least
 * @tree: tree to check
 * Return: number of nodes with children
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	count += (tree->left || tree->right);
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
