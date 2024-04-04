#include "binary_trees.h"

/**
 *binary_tree_depth - measures the height of a binary tree
 *@tree: entry pointer
 *Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t hl, hr;

	if ((!tree) || (!tree->left && !tree->right))
		return (0);

	hl = binary_tree_depth(tree->left);
	hr = binary_tree_depth(tree->right);

	if (hl > hr)
		return (hl);
	else
		return (hr);
}
