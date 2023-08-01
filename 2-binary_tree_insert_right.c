#include "binary_trees.h"

/**
 * binary_tree_insert_right - append a node to the right of a parent
 * @parent: parent to append to its right
 * @value: value of the appended node
 * Return: NULL if fails or new appended node.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
		new_node->right = parent->right, parent->right->parent = new_node;
	parent->right = new_node;
	return (new_node);
}
