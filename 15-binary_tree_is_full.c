#include "binary_trees.h"

/**
 * binary_tree_is_full - says if a tree is full or not
 *              it is full if it has two/none children
 * @tree: root to tree
 * Return: 1 for the current node if full, 0 otherwise.
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree)
	{
		if (tree->left && tree->right)
		{
			left = binary_tree_is_full(tree->left);
			right = binary_tree_is_full(tree->right);
			if (!left || !right)
				return(0);
			return(1);
		}
		else if (tree->left == NULL && tree->right == NULL)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
