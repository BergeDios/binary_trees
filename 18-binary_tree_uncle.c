#include "binary_trees.h"
/**
* binary_tree_sibling - finds the sibling of a node
* @node: pointer to node
* Return: pointer to sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if ((void *)node->parent->right == (void *)node)
		return (node->parent->left);
	else
		return (node->parent->right);
}
/**
* binary_tree_uncle - finds uncle of a node
* @node: pointer to node
* Return: pointer to uncle of node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
