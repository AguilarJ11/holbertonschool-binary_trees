#include "binary_trees.h"

/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree: entry pointer
 *Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t hl = 0, hr = 0;

	if ((!tree) || (!tree->left && !tree->right))
		return (0);

	if (tree->left)
		hl = binary_tree_balance(tree->left) + 1;

	if (tree->right)
		hr = binary_tree_balance(tree->right) + 1;

	return (hl - hr);
}
