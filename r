#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_print(root);
    printf("\n");
    binary_tree_insert_left(root->right, 128);
    binary_tree_insert_left(root, 54);
    binary_tree_print(root);
    return (0);
}
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

	
	if (parent->left == NULL)
	{
		parent->left = binary_tree_node(parent, value);
	}
	else
	{
		tmp = parent->left;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = tmp;
	}
	return (NULL);
}
