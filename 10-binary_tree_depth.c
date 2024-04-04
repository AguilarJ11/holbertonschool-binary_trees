#include "binary_trees.h"

/**
 *binary_tree_depth  - measures the depth of a binary tree
 *@tree: entry pointer
 *Return: height
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t h;

	if (!tree)
		return (0);
	if (tree->parent)
		h++;
	binary_tree_depth(tree->left);
	binary_tree_depth(tree->right);

	return (0)
}
