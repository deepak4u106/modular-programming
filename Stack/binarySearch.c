/**
 *      file    :  searchStack.c
 *      author  :  deepak_jangra
 *      created :  2021 May 09 04:39:07  IST
 *      lastMod :  Sunday 09 May 2021 04:39:07 PM IST
 **/

#include"header.h"
#include"declaration.h"

void* binarySearch(void* arg)
{
  int mid,low,high,key,i = 0;
  printf("%s : Begin\n",__func__);

  stack* stk = (stack*)arg;

  printf("Enter the key to search in Stack\n");
  scanf("%d", &key);
  low = 0;
  high = stk->size-1;
  
  while(low <= high)
  {
    mid = ( high + low ) / 2;
    if(key == *(stk->stkptr+i))
    {
        printf("%d is found in the Stack\n", key);
        return arg;
    }
    else if(key > *(stk->stkptr + mid))
        low = mid + 1;
    else if(key < *(stk->stkptr + mid))
        high = mid - 1;
  }

  printf("OOPS %d is not found in the Stack\n", key);
  
  
  printf("%s : End\n",__func__);
  return arg;
}    

