#include "binary_trees.h"

/**
 * binary_tree_depth - gets the depth of the node
 * @tree: the node to get its depth
 * Return: depth
 */


size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (tree ? 1 + binary_tree_depth(tree->parent) : 0);
}