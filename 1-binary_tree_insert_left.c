#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *insert_left = malloc(sizeof(binary_tree_t));

    if (!insert_left || !parent)
    {
        return(NULL);
    }

    insert_left->n = value;
    insert_left->parent = parent;

    if (parent->left != NULL)
    {
        insert_left->left = parent->left;
        insert_left->left->parent = insert_left;
    }

    parent->left = insert_left;

    return(insert_left);
}