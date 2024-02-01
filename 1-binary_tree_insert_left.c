#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new left child node in a binary tree.
 * @parent: Pointer to the parent node.
 * @value: Value to put in the new node.
 *
 * Description: Creates a new node with the given value and inserts it as the
 * left child of the specified parent node. If the parent already has a left
 * child, the new node takes its place and the existing left child becomes the
 * left child of the new node.
 *
 * Return: Pointer to the new left child node, or NULL on failure.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
