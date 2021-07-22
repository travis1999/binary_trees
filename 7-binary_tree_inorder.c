#include "binary_trees.h"

/**
 * binary_tree_inorder - bin tree  pre-order traversal
 * @tree: the three
 * @func: funcion to execute in the node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func != NULL && tree != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
