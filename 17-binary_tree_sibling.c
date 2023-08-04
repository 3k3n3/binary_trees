#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: Pointer to the node to find the sibling.
 *
 * Return: Pointer to the sibling node, or NULL if node is NULL,
 *	the parent is NULL, or node has no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL); /* If node is NULL or the parent is NULL, return NULL */

	binary_tree_t *parent = node->parent;

	/* Check if node is the left child, */
	/* return the right child if exists, otherwise NULL */
	if (parent->left == node)
		return (parent->right);

	/* Check if node is the right child, */
	/* return the left child if exists, otherwise NULL */
	if (parent->right == node)
		return (parent->left);

	return (NULL); /* Node is not a child of its parent, return NULL */
}
