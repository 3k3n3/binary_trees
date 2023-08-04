#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: Pointer to the root node of the tree to count the nodes.
 *
 * Return: Number of nodes with at least 1 child, or 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0); /* If tree is NULL, return 0 */

	/* If the node has at least 1 child */
	/* add 1 and recursively count nodes in left and right subtrees */
	if (tree->left != NULL || tree->right != NULL)

		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	/* If the node has no children, return 0 */
	return (0);
}
