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
		return (0); /* If tree is NULL, return 0 */

	size_t l_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	size_t r_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	/* Return max height of left & right subtree */
	return ((l_height > r_height) ? l_height : r_height);
}
