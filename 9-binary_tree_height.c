#include "binary_trees.h"
/**
 * binary_tree_height - gets the height of the tree 
 * @tree: tree to go through
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return 0;
	}
	else
	{
		size_t l = 0;
		size_t r = 0;
		if (tree)
		{
			l = (tree->left ? 1 + binary_tree_height(tree->left) : 0);
			r = (tree->right ? 1 + binary_tree_height(tree->right) : 0);
		}
		return max(l,r);
	}
}
