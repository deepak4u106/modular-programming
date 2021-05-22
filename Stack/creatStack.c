/**
 *      file    :  creatStack.c
 *      author  :  deepak_jangra
 *      created :  2021 May 09 04:34:38  IST
 *      lastMod :  Sunday 09 May 2021 04:34:38 PM IST
 **/

#include"header.h"
#include"declaration.h"

void* creatStack(void* arg)
{
  printf("%s : Begin\n",__func__);

  stack *stk;
  stk = (stack*)malloc(sizeof(stack));

  if(!stk)
  {
    perror("malloc");
    (*fptr[1])((void*)"failure");
  }

  printf("Enter the size of the stack\n");
    
  stk->top = -1;
  scanf("%d", &stk->size);
  stk->stkptr = (int*)malloc(sizeof(int)*stk->size);
  if(!stk->stkptr)
  {
    perror("malloc");
    (*fptr[1])((void*)"failure");
  }
  
  
  
  printf("%s : End\n",__func__);
  return (void*)stk;
}    

