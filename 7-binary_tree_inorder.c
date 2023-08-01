#include "binary_trees.h"

/**
 * binary_tree_inorder - print nodes using in-order traversal
 * @tree: tree to go through
 * @func: function to use
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inoder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
