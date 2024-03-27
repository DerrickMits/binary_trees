#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: Pointer to the lowest common ancestor if found, otherwise NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
                                     const binary_tree_t *second)
{
binary_tree_t *parent_first, *parent_second;
if (!first || !second)
return (NULL);
if (first == second)
return ((binary_tree_t *)first);
parent_first = first->parent;
parent_second = second->parent;
while (parent_first)
{
parent_second = second->parent;
while (parent_second)
{
if (parent_first == parent_second)
return (parent_first);
parent_second = parent_second->parent;
}
parent_first = parent_first->parent;
}
return (NULL);
}
