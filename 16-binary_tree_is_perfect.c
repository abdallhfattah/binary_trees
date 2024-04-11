#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function how a perfect tree
 * @tree: pointer to the root node of the tree to check
 * Return: 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if ((tree->left == NULL) != (tree->right == NULL))
		return (0);
	if (tree->left == NULL)
		return (0);
	if ((tree->left->left == NULL) != (tree->right->left == NULL))
		return (0);
	if (!binary_tree_is_perfect(tree->left) ||
			!binary_tree_is_perfect(tree->right))
		return (0);
	return (1);
}
