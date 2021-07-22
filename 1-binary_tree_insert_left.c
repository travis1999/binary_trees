#include "binary_trees.h"


/**
 * binary_tree_insert_left - insert to left of parent
 * @parent: parent to add child
 * @value: value f the child
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;
	binary_tree_t *temp = NULL;

	if (parent == NULL)
		return (NULL);
	else
		new = binary_tree_node(parent, value);
		if (new == NULL)
			return (NULL);

	if (parent->left == NULL)
		parent->left = new;
	else
	{
		temp = parent->left;
		parent->left = new;
		new->left = temp;
	}
		
	return (new);

}
