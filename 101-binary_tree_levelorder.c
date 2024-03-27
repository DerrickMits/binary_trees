#include "binary_trees.h"

/**
 * depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: If tree is NULL, your function must return 0, else return the depth.
 */
size_t depth(const binary_tree_t *tree)
{
return (tree && tree->parent ? 1 + depth(tree->parent) : 0);
}

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestors return NULL, else return common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
size_t first_depth, second_depth;
if (!first || !second)
return (NULL);
if (first == second || first->parent == second || second->parent == first)
return ((binary_tree_t *)first->parent);
for (first_depth = depth(first); first_depth > 0; first_depth--)
first = first->parent;
for (second_depth = depth(second); second_depth > 0; second_depth--)
second = second->parent;
while (first && second && first != second)
{
first = first->parent;
second = second->parent;
}
return ((binary_tree_t *)first);
}
