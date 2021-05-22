/**
 *      file    :  searchStack.c
 *      author  :  deepak_jangra
 *      created :  2021 May 09 04:39:07  IST
 *      lastMod :  Sunday 09 May 2021 04:39:07 PM IST
 **/

#include"header.h"
#include"declaration.h"

void* linearSearch(void* arg)
{
  int key;
  int i;
  stack* stk = (stack*)arg;
  printf("%s : Begin\n",__func__);

  printf("DATA : %d\n", *(stk->stkptr+(stk->top-1)));



  printf("Stack size : %d\n", stk->top);
  printf("Enter the key to find in the stack\n");\
  scanf("%d", &key);



  for(i = 0 ; i < stk->top ; i++)
  {
    if(key == *(stk->stkptr+i))
    {
        printf("%d is found in the STACK\n", key);
        return arg;
    }
  }

  printf("Element not found in the STACK\n");
  
  
  
  printf("%s : End\n",__func__);
  return arg;
}    

