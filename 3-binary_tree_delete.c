#include "binary_trees.h"

void binary_tree_delete(binary_tree_t *tree)
{
    if (!tree)
    {
        return;
    }

	free (tree->left);
    free (tree);
    free (tree->right);

    free (tree);
    free (tree->parent);
}