#include <stdio.h>
#include "bst.h"

int main()
{
  Tree t = createTree();
  // link x;
  // insert(t, 99);
  // imprime(t, "arvore");
  // insert(t, 88);
  // imprime(t, "arvore");
  // insert(t, 77);
  // imprime(t, "arvore");

  AVLinsert(t, 69);
  AVLinsert(t, 420);
  AVLinsert(t, 12);
  AVLinsert(t, 7);
  AVLinsert(t, 15);

  imprime(t,"arvore");

  return 0;
}
