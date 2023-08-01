#include "binary_trees.h"

/**
 * binary_tree_uncle - finds node's uncle
 * @node: node to check
 * Return: the uncle node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
