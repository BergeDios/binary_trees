#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_nodes - measures the size of a binary tree
 * @tree: pointer to tree
 * Return: measure of tree size
 */
 size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leaf_flag = 0, child_flag = 0;

	if (!tree)
		return (0);
	leaf_flag = binary_tree_is_leaf(tree);
	if (leaf_flag == 1)
		child_flag = 0;
	else
		child_flag = 1;
	return (child_flag + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
