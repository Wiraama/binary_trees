#include "binary_trees.h"

/**
 * binary_tree_depth - main entry point
 * fuction to return binary tree depth
 *
 * @tree: current node
 * Return: depth of binary tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
