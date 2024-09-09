// ***
// *** DO NOT modify this file
// ***


typedef struct tnode
{
  int value;
  struct tnode * left;
  struct tnode * right;
} TreeNode;

typedef struct trnode
{
  TreeNode * root;
} Tree;

Tree * newTree(void);
void freeTree(Tree * tr);
Tree * buildTree(int * inArray, int * postArray, int size);
void printPath(Tree * tr, int val);

