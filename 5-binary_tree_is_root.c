#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if node is a root
 *@node: pointer to checked node
 * Return: 1 if node is the root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node == NULL || node->parent != NULL ? 0 : 1);
}

