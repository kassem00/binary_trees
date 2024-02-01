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
	binary_tree_t *tmp;

	tmp = malloc(sizeof(binary_tree_t));
	
	if (parent->left == NULL)
	{
		parent->left = malloc(sizeof(binary_tree_t));

		if(parent->left == NULL)
			return (NULL);

		parent->left->n = value;
		parent->left->left = NULL;
		parent->left->right = NULL;
	}
	else
	{
		tmp = parent->left;
		parent->left->n = value;

		 
	}
	
}
