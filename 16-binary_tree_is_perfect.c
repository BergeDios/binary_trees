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
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root node
 * Return: 1 if perfect 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_child = 0, right_child = 0, balance;

	if (!tree || (tree->left && !tree->right) || (!tree->left && tree->right))
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	balance = binary_tree_balance(tree);
	if (balance != 0)
		return (0);
	left_child = binary_tree_is_perfect(tree->left);
	right_child = binary_tree_is_perfect(tree->right);
	if ((left_child == 1) && (right_child == 1))
		return (1);
	return (0);
}
