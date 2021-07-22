#include "binary_trees.h"

/**
 * binary_tree_is_root - check if node is root
 * @node: node in tree
 * Return: 0 if false else 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (!node->parent);
}
