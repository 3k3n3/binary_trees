#include "binary_trees.h"

/**
 * binary_tree_height - height of a binary tree for a bal tree
 * @tree: tree to go through
 *
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
			right = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		}
		return ((left > right) ? left : right);
	}
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 *
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height(tree->left));
		right = ((int)binary_tree_height(tree->right));
		total = left - right;
	}
	return (total);
}
