#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure or if parent is NULL
 *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_right;

	if (parent == NULL)
		return (NULL);

	new_node_right = binary_tree_node(parent, value);

	new_node_right->right = parent->right;
	if (new_node_right->right != NULL)
		new_node_right->right->parent = new_node_right;

	parent->right = _node_right;
	return (new_node_right);
}
