#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts node as right child of another node
 * @parent: pointer to node to insert right child in 
 * @value: value to insert in new right child
 * Return: poiter to new created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	if(parent)
	{
		new_node->n = value;
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = parent->right;

		if (parent->right)
			parent->right->parent = new_node;
		parent->right = new_node;
	}
	return (new_node);
}
