#include "binary_trees.h"
/**
 * binary_tree_nodes - function that returns number of nodes in a tree
 * @tree: tree to check
 * Return: number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}

	size_t l = 0;
	size_t r = 0;

	l = (tree->left != NULL ||
				 tree->right != NULL
			 ? binary_tree_nodes(tree->left) + 1
			 : 0);
	r = (tree->left != NULL ||
				 tree->right != NULL
			 ? binary_tree_nodes(tree->right) + 1
			 : 0);

	return ((l + r) / 2);
}
