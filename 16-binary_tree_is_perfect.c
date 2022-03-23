#include "binary_trees.h"
#include <stdio.h>
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
	printf("balance of %d is %d\n",tree->n, balance);
	if (balance != 0)
		return (0);
	left_child = binary_tree_is_perfect(tree->left);
	right_child = binary_tree_is_perfect(tree->right);
	if ((left_child == 1) && (right_child == 1))
		return (1);
	return (0);
}
