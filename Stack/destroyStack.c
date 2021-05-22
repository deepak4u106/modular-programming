/**
 *      file    :  destroyStack.c
 *      author  :  deepak_jangra
 *      created :  2021 May 09 04:39:07  IST
 *      lastMod :  Sunday 09 May 2021 04:39:07 PM IST
 **/

#include"header.h"
#include"declaration.h"

void* destroyStack(void* arg)
{
  stack* stk;
  printf("%s : Begin\n",__func__);

  stk = (stack*)arg;

  stk->top = -1;
  free(stk);
  stk = NULL;



  
  
  printf("%s : End\n",__func__);
  return arg;
}    

