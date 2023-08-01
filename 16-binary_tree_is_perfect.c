#include "binary_trees.h"

/*helper functions*/
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - checks if the tree is perfect
 * @tree: root of tree to check
 * Return: 1 if perfect, else 0.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h = 0, perfect_size = 0;

	if (tree == NULL)
		return (0);
	h = binary_tree_height(tree);
	perfect_size = (1 << (h + 1)) - 1;
	if (perfect_size == binary_tree_size(tree))
		return (1);
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
		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	else
		return (0);
}

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: pointer to the root node
 * Return: size of each node, if tree is NULL return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t n_left, n_right;

	if (tree)
	{
		n_left = binary_tree_size(tree->left);
		n_right = binary_tree_size(tree->right);
		return (1 + n_left + n_right);
	}
	else
		return (0);
}
