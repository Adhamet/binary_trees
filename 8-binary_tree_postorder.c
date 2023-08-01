#include "binary_trees.h"

/**
 * binary_tree_postorder - print nodes using post-order traversal
 * @tree: tree to go through
 * @func: function to use
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
