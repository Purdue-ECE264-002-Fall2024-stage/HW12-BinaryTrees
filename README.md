# Print the path from a node to the root

Learning Goals
==============

* Construct binary trees from in-order and pre-order expressions
* Find the path from a node to the root
* Write your own makefile to compare with test cases

Construct a Binary Tree
=======================

Given the in-order and pre-order expressions of a binary tree, you are asked to construct the binary tree.  Code is already written to read in the expressions to arrays of integers, which, along with the length of the arrays, will be given to your function.

You may assume that all inputs are valid, that the in-order and the post-order are from the same binary tree.

Note that unlike the previous assignment, the binary trees of this assignent are not necessarily binary search trees.

Hint:  The pre-order traversal starts with the root.

Path to Root
============

Consider [a
binary](https://i1.wp.com/www.techiedelight.com/wp-content/uploads/Root-To-Leaf-Paths.png?resize=323%2C338&ssl=1). The
path from node 7 includes 7, 3, and 1. The path from 8 includes 8, 6,
3, and 1. Please notice that this is not necessarily a binary search
tree.

For simplicity, this assignment asks you to print the path from bottom to top (the root is printed last).  You can assume that the value of the node you're looking for appears once and only once in the binary tree.

Helper functions are allowed in both parts of this assignment.

Note that, in main.c, the value your printPath function starts the path from is derived from the filename.  This works for the given test cases, but be careful in writing your own.

Makefile
=======================

For this homework you are expected to write your own makefile. You can copy a makefile template from a previous assignment and tweak it to suit this assignment. Make sure that the right files are listed for SRCS, and note that the two inputs (inorder and preorder) are from separately named folders. You can access a input file by [name of folder]/[file name]. an example would be "inorder/in1". 


Submission
==========

You are only required to submit tree.c to the assignment on Gradescope.
