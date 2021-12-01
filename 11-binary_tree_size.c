#include "binary_trees.h"

/**
* binary_tree_size - Measures the size of a binary tree
* @tree: is a pointer to the root node of the tree to measure the size
* Return: 0 if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
		return (0);

	r = binary_tree_size(tree->right);
	l = binary_tree_size(tree->left);
	return (1 + l + r);
}
