#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_balance - measures the balance of a node in a binary tree
 * @tree: pointer to tree
 * Return: measure of tree node balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (tree->parent && (tree->right && !tree->left))
		right++;
		
	return (left - right);
}
