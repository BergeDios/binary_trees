#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to tree
 * Return: measure of tree height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_counter = 0, right_counter = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_counter = 1 + binary_tree_height(tree->left);
	right_counter = 1 + binary_tree_height(tree->right);

	if (left_counter > right_counter)
		return (left_counter);
	return (right_counter);
}
