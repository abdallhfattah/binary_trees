#include "binary_trees.h"
/**
 * binary_tree_is_leaf -  function chacks if it is a leaf
 *@node: pointer to checked leaf
 * Return: return 1 if it is a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
