#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if tree is leaf
 * @node: node
 * Return: 0 if false else 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (!node->left && !node->right);
}
