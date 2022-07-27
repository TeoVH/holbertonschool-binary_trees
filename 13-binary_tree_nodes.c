#include "binary_tress.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child
 * in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: Number of nodes with childreen
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_nodes = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->left || tree->right)
	{
		count_nodes += 1;
	}

	count_nodes += binary_tree_nodes(tree->left);
	count_nodes += binary_tree_nodes(tree->right);

	return (count_nodes);
}
