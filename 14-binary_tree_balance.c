#include "binary_trees.h"

/**
 *bt_hi - measures the height of a binary tree
 *@tree: entry pointer
 *Return: heigth
 */

int bt_hi(const binary_tree_t *tree)
{
	size_t hl = 0, hr = 0;

	if ((!tree) || (!tree->left && !tree-right))
		return (0);

	if (tree->left)
		hl = bt_hi(tree->left) + 1;

	if (tree->right)
		hr = bt_hi(tree->right) + 1;

	if (hl > hr)
		return (hl);
	else
		return (hr);
}

/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree: entry pointer
 *Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t hl = 0, hr = 0;

	if (!tree)
		return (0);

	hl = bt_hi(tree->left);
	hr = bt_hi(tree->right);

	return (hl - hr);
}
