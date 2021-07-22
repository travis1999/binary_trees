#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: head node
 * @value: value to add
 * Return: pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));
	
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;

	return (new);
}
