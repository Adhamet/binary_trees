#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: root node of tree to count its leaves
 * Return: number of leaves, NULL if tree is NULL
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0, l = 0, r = 0;

	if (tree)
	{
		l = binary_tree_leaves(tree->left);
		r = binary_tree_leaves(tree->right);
		leaves = l + r;
		return ((!l && !r) ? leaves + 1 : leaves);
	}
	else
		return (0);
}
