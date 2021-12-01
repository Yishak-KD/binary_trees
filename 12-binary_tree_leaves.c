#include "binary_trees.h"

/**
 * binary_tree_leaves- 
 * @tree: ptr to the root node of the tree to count the leaves in
 *
 * Return: number of leaves in binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leave_count = 0;

	if (tree)
	{
		leaves_count += (!tree->left && !tree->right) ? 1 : 0;
		leaves_count += binary_tree_leaves(tree->left);
		leaves_count += binary_tree_leaves(tree->right);
	}
	return (leaves_count);
}
