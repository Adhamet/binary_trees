#include "binary_trees.h"

/**
 * binary_tree_preorder - print nodes using pre-order traversal
 * @tree: tree to go through
 * @func: function to use
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preoder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
