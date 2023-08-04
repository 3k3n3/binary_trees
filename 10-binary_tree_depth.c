#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: Depth of the node, or 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0); /* If tree is NULL, return 0 */
	}

	size_t depth = 0;
	const binary_tree_t *current = tree;

	/* Traverse up the tree to find the depth */
	while  (current->parent != NULL)
	{
		depth++;
		current = current->parent;
	}
	return (depth);
}
