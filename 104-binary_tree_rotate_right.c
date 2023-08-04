#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotates right the binary tree
 * @tree: node of root.
 * Return: pointer to a new node
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
    binary_tree_t *pivot;

    if (!tree && !tree->left)
        return (NULL);

    pivot = tree->left;
    tree->left = pivot->right;
    if (!pivot->right)
        pivot->right->parent = tree;
    pivot->right = tree;
    pivot->parent = tree->parent;
    tree->parent = pivot;
    return (pivot);
}
