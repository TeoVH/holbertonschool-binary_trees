#include "binary_trees.h"

/**
 * binary_tree_balance -  the balance factor
 *
 * @tree: pointer to nod
 * Return: the measure balancer factor of df
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int df = 0, count_left = 0, count_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		count_left += 1 + binary_tree_balance(tree->left);
	}

	if (tree->right)
	{
		count_right += 1 + binary_tree_balance(tree->right);
	}

	df = count_left - count_right;
	return (df);
}
