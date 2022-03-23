#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to root node
 * Return: 1 if full 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_child = 0, right_child = 0;

	if (!tree || (tree->left && !tree->right) || (!tree->left && tree->right))
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	left_child = binary_tree_is_full(tree->left);
	right_child = binary_tree_is_full(tree->right);
	if ((left_child == 1) && (right_child == 1))
		return (1);
	return (0);
}
