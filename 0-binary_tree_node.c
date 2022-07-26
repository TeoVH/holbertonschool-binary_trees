#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *create_node = malloc(sizeof(binary_tree_t));
    if (create_node == NULL)
    {
        return(NULL);
    }
    create_node->parent = parent;
    create_node->n = value;
    create_node->left = NULL;
    create_node->right = NULL;
    return (create_node);
}