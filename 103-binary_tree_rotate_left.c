#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left-rotation on a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node of the tree once rotated.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
if (!tree || !tree->right)
return (tree);
binary_tree_t *new_root = tree->right;
tree->right = new_root->left;
if (new_root->left)
new_root->left->parent = tree;
new_root->parent = tree->parent;
if (!tree->parent)
tree = new_root;
else if (tree == tree->parent->left)
tree->parent->left = new_root;
else
tree->parent->right = new_root;
new_root->left = tree;
tree->parent = new_root;
return (new_root);
}
