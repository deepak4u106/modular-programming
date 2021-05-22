/**
 *      file    :  displayStack.c
 *      author  :  deepak_jangra
 *      created :  2021 May 09 04:39:07  IST
 *      lastMod :  Sunday 09 May 2021 04:39:07 PM IST
 **/

#include"header.h"
#include"declaration.h"

void* displayStack(void* arg)
{
  int i;
  stack* stk;
  printf("%s : Begin\n",__func__);

  stk = (stack*)arg;

  if(stk->top <= 0)
  {
    printf("Stack is empty\n");
    return arg;
  }
    
  for(i = 0 ; i < stk->size ; i++)
  {
    printf("DATA %d\n", *(stk->stkptr+i));
  }



  printf("%s : End\n",__func__);
  return arg;
}    

