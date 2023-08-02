#include "binary_trees.h"

/**
 * binary_trees_ancestors - finds lowest common ancestor of two nodes
 * @first: first node.
 * @second: second node.
 * Return: lowest common ancestor, or NULL
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
										const binary_tree_t *second)
{
	binary_tree_t *f_p, *s_p;

	if (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);

		f_p = first->parent;
		s_p = second->parent;

		if (f_p == NULL || first == s_p || (!f_p->parent && s_p))
			return (binary_trees_ancestor(first, s_p));
		else if (s_p == NULL || f_p == second || (!s_p->parent && f_p))
			return (binary_trees_ancestor(f_p, second));
		return (binary_trees_ancestor(f_p, s_p));
	}
	else
		return (NULL);
}
