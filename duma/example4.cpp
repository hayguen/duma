#include <malloc.h>
#include <new>
#include <efence.h>
#include <efencepp.h>

void main()
{
  int *pi = (int*)malloc(10*sizeof(int));
  int i;
  for(i=0; i<10; ++i)
    pi[i] = i;
  delete pi;
}