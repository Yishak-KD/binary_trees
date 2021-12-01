#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: 0 if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lh = 0, rh = 0;

		lh = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rh = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((lh > rh) ? lh : rh);
	}
	return (0);
}
