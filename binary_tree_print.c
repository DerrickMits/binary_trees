#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

static void print_tree(const binary_tree_t *tree, int depth);

/**
 * binary_tree_print - Prints a binary tree
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
if (tree == NULL)
return;
print_tree(tree, 0);
}

/**
 * print_tree - Helper function to print the binary tree
 * @tree: Pointer to the root node of the tree to print
 * @depth: Depth of the current node
 */
static void print_tree(const binary_tree_t *tree, int depth)
{
int i;
if (tree == NULL)
return;
print_tree(tree->right, depth + 1);
for (i = 0; i < depth; i++)
printf("    ");
printf("%d\n", tree->n);
print_tree(tree->left, depth + 1);
}
