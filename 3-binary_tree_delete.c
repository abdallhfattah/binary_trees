#include "binary_trees.h"
/**
 * binary_tree_delete - function that deletes the tree
 *@tree: POINTER TO ROOT
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
