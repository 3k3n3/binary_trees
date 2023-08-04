#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: Pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: Pointer to created node or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!parent)
	{
		/* Invalid parent node */
		return (NULL);
	}

	if (!new_node)
	{
		/* Failed to allocate memory for the new node */
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = (NULL);

	if (parent->left != NULL)
	{
		/* If parent already has a left-child, */
		/* the new node takes its place */
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	else
	{
		new_node->left = NULL;
	}

	parent->left = new_node;

	return (new_node);
}
