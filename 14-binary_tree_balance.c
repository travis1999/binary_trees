#include "binary_trees.h"

/**
 * binary_tree_height - height of a binary tree
 * @tree: input tree
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (len(tree) - 1);
}
/**
 * len - len
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
 * max - maximum
 * @a: the first number
 * @b: the second number
 * Return: return max integer
 */
int max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}
/**
 * binary_tree_balance - find balance
 * @tree: the tree
 * Return: if is balance or not
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left = (int)binary_tree_height(tree->left);
	else
		left = -1;
	if (tree->right != NULL)
		right = (int)binary_tree_height(tree->right);
	else
		right = -1;
	return (left - right);
}