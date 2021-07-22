#include "binary_trees.h"


/**
 * len - find length
 * @tree: input tree
 * Return: height of tree
 */
size_t len(const binary_tree_t *tree)
{
	size_t left, right;
	int total;

	if (tree == NULL)
		return (0);

	left = len(tree->left);
	right = len(tree->right);
	total = max(left, right) + 1;
	return (total);
}

/**
 * max - maximum value
 * @a: the first number
 * @b: the second number
 * Return: maximum value
 */
int max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

/**
 * binary_tree_height - height of a binary tree
 * @tree: input tree
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return  len((tree) - 1);
}
