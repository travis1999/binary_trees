#include "binary_trees.h"

/**
 * binary_tree_is_full - check if the tree is full
 * @tree: tree
 * Return: 0 if false 1 if true
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	is_full = binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
	return (is_full);
}