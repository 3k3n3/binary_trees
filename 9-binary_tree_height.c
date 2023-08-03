#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the binary tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0); /* If tree is NULL, return 0 */
	}

	size_t l_height = binary_tree_height(tree->left);
	size_t r_height = binary_tree_height(tree->right);

	/* Return max height of left & right subtrees plus 1 for current node */
	return (((l_height > r_height) ? l_height : r_height) + 1);
}
