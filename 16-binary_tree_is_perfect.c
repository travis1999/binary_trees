#include "binary_trees.h"


/**
 * binary_tree_size - len the size of tree
 * @tree: node
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size;

	if (tree == NULL)
		return (0);

	size = 1 + binary_tree_size(tree->right) + binary_tree_size(tree->left);

	return (size);
}

/**
 * binary_tree_height - height of a binary tree
 * @tree: node
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (len(tree) - 1);
}

/**
 * max - max int
 * @a: the first number
 * @b: the second number
 * Return: height of tree
 */
int max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

/**
 * len - len of tree
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
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: tree
 * Return: 0 if false 1 if true
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size, height, isPerfect;

	if (!tree)
		return (0);
	size = (int)binary_tree_size(tree);
	height = binary_tree_height(tree);
	isPerfect = size == (2 << height) - 1;
	return (isPerfect);
}