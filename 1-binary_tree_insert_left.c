#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts node as left child of another node
 * @parent: pointer to node to insert left child in
 * @value: value to insert in new left child
 * Return: poiter to new created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent)
	{
		if (parent->left)
		{
			parent->left->parent = new_node;
			new_node->left = parent->left;
		}	
		parent->left = new_node;
	}
	else
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
