#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise. If tree is NULL, return 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0); /* If tree is NULL, return 0 */

	/* If both left and right subtrees are NULL, */
	/* it's a leaf node, return 1 (full) */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If both left and right subtrees are not NULL,*/
	/* recursively check them */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* If one of the subtrees is NULL and the other is not, */
	/* it's not full, return 0 */
	return (0);
}

