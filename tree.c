// ***
// *** You MUST modify this file
// ***

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "tree.h"

// DO NOT MODIFY FROM HERE --->>>
Tree * newTree(void)
{
  Tree * t = malloc(sizeof(Tree));
  t -> root = NULL;
  return t;
}

void deleteTreeNode(TreeNode * tr)
{
  if (tr == NULL)
    {
      return;
    }
  deleteTreeNode (tr -> left);
  deleteTreeNode (tr -> right);
  free (tr);
}

void freeTree(Tree * tr)
{
  if (tr == NULL)
    {
      // nothing to delete
      return;
    }
  deleteTreeNode (tr -> root);
  free (tr);
}


// <<<--- UNTIL HERE

// ***
// *** You MUST modify the following functions
// ***

//You ARE allowed to create any helper functions needed
//for either of the following functions

/*
buildTree:
Given the infix (inArray), prefix (preArray), and size
of a binary tree, construct a binary tree
Note that this tree is not necessarily a binary search tree
*/
Tree * buildTree(int * inArray, int * postArray, int size)
{
}


/*
printPath:
Print the path from the desired node to the root, inclusive at both
ends with the root being printed last
*/
void printPath(Tree * tr, int val)
{
}

