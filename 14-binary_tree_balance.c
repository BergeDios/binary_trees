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

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	left_counter = 1 + binary_tree_height(tree->left);
	right_counter = 1 + binary_tree_height(tree->right);

	if (left_counter > right_counter)
		return (left_counter);
	return (right_counter);
}
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
	return (left - right);
}
