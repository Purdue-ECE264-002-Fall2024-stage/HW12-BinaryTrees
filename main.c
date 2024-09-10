// ***
// *** DO NOT modify this file
// ***
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "tree.h"

// This function reads in an array of numbers from a file
// it returns whether it is successful,
// and writes the array and the size of the array to the int ** and int * given it
static bool readArray(const char * filename, int * * array, int * size)
{
  // Open file
  FILE * fptr = fopen(filename, "r");
  if (fptr == NULL)
    {
      return false;
    }

  // Count the integers in the file, return if none
  int numint = 0;
  int value;
  while (fscanf(fptr, "%d", & value) == 1)
    {
      numint ++;
    }
  if (numint == 0)
    {
      // no integer to read
      return false;
    }
  
  // Write the resulting count to "size" and allocate an array of that size
  * size = numint;
  int * arr = malloc(sizeof(int) * numint);

  // Go back to the start of the file and read in that many integers to our array
  fseek (fptr, 0, SEEK_SET);
  int ind = 0;
  while (ind < numint)
    {
      if (fscanf(fptr, "%d", & arr[ind]) != 1)
	{
	  fprintf(stderr, "SOMETHING WRONG\n");
	  free (arr);
	  * size = 0;
	  return false;
	}
      ind ++;
    }

  // Close file, write the pointer to the array where asked
  fclose (fptr);
  * array = arr;
  return true;
}

int main(int argc, char * * argv)
{
  // argv[1]: inorder (input)
  // argv[2]: preorder (input)
  if (argc < 3)
    {
      return EXIT_FAILURE;
    }

  // Read in arrays from files
  int * inArray = NULL;
  int * preArray = NULL;
  int insize;
  int presize;
  bool rtv;
  rtv = readArray(argv[1], & inArray, & insize);
  if (rtv == false)
    {
      return EXIT_FAILURE;
    }
  rtv = readArray(argv[2], & preArray, & presize);
  if (rtv == false)
    {
      free (inArray);
      return EXIT_FAILURE;
    }
  if (insize != presize)
    {
      // mismatch
      free (inArray);
      free (preArray);
      return EXIT_FAILURE;
    }

  // Build tree with the student's algorithm
  Tree * tr = NULL;
  tr = buildTree(inArray, preArray, insize);

  // The sought value is, for our tests, 24 divided by the one-digit number at the end of the filenames
  char * divisor = argv[1];
  while (*(divisor + 1)) ++divisor;
  printPath(tr, 24 / (*(divisor) - '0'));

  // Free memory
  freeTree (tr);
  free (inArray);
  free (preArray);
  return EXIT_SUCCESS;
}
