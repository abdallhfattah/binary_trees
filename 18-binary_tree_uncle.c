#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds if a node is sibling
 * @node: node to check
 * Return: The uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (!node || !node->parent || !node->parent->parent || !node->parent->parent->left)
    {
        return (NULL);
    }
    if (node->parent->parent->left == node->parent)
        return (node->parent->parent->right);
    return (node->parent->parent->left);
}
