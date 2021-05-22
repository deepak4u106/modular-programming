/**
 *      file    :  pushElement.c
 *      author  :  deepak_jangra
 *      created :  2021 May 09 04:39:07  IST
 *      lastMod :  Sunday 09 May 2021 04:39:07 PM IST
 **/

#include"header.h"
#include"declaration.h"

void* pushElement(void* arg)
{
  int i;
  
  stack* stk;
  
  printf("%s : Begin\n",__func__);
  
  stk = (stack*)arg;
  
  stk->top++;  
  printf("TOP : %d\n", stk->top);
  if(stk->top == stk->size)
  {
    printf("Stack is full\n");
    return arg;
  }
  

  printf("Enter the value to push element\n");
  
  scanf("%d",stk->stkptr+stk->top);

  
  printf("%s : End\n",__func__);
    
  return arg;
}    

