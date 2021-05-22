/**
 *      file    :  main.c
 *      author  :  deepak_jangra
 *      created :  2021 May 08 06:38:46  IST
 *      lastMod :  Saturday 08 May 2021 06:38:46 PM IST
 **/

#include"header.h"
#include"declaration.h"

int main()
{
  printf("%s : Begin\n",__func__);

  init();
  stack *stk;

  stk = NULL;

  printf("%s : Begin\n",__func__);
  while(1)
    stk = (stack*)(*fptr[0])((void*)stk);
  
  
  printf("%s : End\n",__func__);
  return 0;
}    

