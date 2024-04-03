#include "binary_trees.h"

/**
 *
 *
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *aux;

	aux = tree;

	while (tree)
	{
		if (tree->right)
		tree = tree->right;
		else if (!tree->right && tree->left)
			tree = tree->left;
		if (!tree->right && !tree->left)
		{
			aux = tree;
			aux->left = NULL;
			aux->right = NULL;
			if (aux->parent)
			tree = aux->parent;
			free(aux);
		}
	}
}
