#include "binary_trees.h"

/*helper functions (from task #9)*/
size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 *@tree: pointer to the root node of the tree to measure the balance factor.
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left)
					- binary_tree_height(tree->right));
	else
		return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree)
	{
		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	else
		return (0);
}
