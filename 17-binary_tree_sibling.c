#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: A pointer to the node to find the sibling of.
 *
 * Return: A pointer to the sibling node, or NULL if no sibling is found.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);
binary_tree_t *parent = node->parent;
if (parent->left == node)
return parent->right;
else if (parent->right == node)
return parent->left;
else
return (NULL);
}
