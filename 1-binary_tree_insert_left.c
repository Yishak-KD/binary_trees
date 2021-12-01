#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node.
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 *
 * Return: a pointer to the created node or NULL on failure or if parent is NULL.
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_left;

	if (parent == NULL)
		return (NULL);

    new_node_left = binary_tree_node(parent, value);

	new_node_left->left = parent->left;
	if (new_node_left->left != NULL)
		new_node_left->left->parent = new_node_left;

	parent->left = new_node_left;
	return (new_node_left);
}
