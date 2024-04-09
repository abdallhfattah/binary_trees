#include "binary_trees.h"
/**
 * binary_tree_leaves - function that returns number of leaves in a tree
 * @tree: tree to check
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	size_t l = 0;
	size_t r = 0;

	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);

	return (l + r);
}
