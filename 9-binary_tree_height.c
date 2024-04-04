#include "binary_trees.h"

/**
 *binary_tree_height - measures the height of a binary tree
 *@tree: entry pointer
 *Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	if (!tree)
		return (0);

	height = binary_tree_height(tree->left);
	height = binary_tree_height(tree->right);

	if (tree->right || tree->left)
		height++;

	return (height);
}
