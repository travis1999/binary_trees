#include "binary_trees.h"


/**
 * binary_tree_insert_right - insert to right of parent
 * @parent: parent to add child
 * @value: value f the child
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;
	binary_tree_t *temp = NULL;

	if (parent == NULL)
		return (NULL);
	else
		new = binary_tree_node(parent, value);
		if (new == NULL)
			return (NULL);

	if (parent->right == NULL)
		parent->right = new;
	else
	{
		temp = parent->right;
		parent->right = new;
		new->right = temp;
	}
		
	return (new);

}
