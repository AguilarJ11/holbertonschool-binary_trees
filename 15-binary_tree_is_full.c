#include "binary_trees.h"

/**
 *
 *
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 0;

	if ((!tree) || (!tree->left) || (!tree->right))
		return (full = 0);

	if (!tree->right && !tree->right)
		return (full = 1);
	else
	{
	full = binary_tree_is_full(tree->left);
	full = binary_tree_is_full(tree->right);
	}

	return (full);




}
