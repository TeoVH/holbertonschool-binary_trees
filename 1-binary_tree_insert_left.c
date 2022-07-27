#include "binary_trees.h"

/**
 * binary_tree_insert_left -  Insert left
 *
 * @parent: pointer to node
 * @value: value of node
 * Return: new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *insert_left = malloc(sizeof(binary_tree_t));

	if (parent == NULL || value == '\0')
		return (NULL);

	if (insert_left == NULL)
		return (NULL);

	insert_left->n = value;
	insert_left->parent = parent;

	if (parent->left)
	{
		insert_left->left = parent->left;
		insert_left->left->parent = insert_left;
	}

	parent->left = insert_left;
	return (insert_left);
}
