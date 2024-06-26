#include "binary_trees.h"
/**
 * binary_tree_inorder - postOrder traverse of tree
 * @tree: tree to traverse
 * @func: function to use
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

