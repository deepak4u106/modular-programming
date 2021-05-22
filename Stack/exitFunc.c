/**
 *      file    :  exitFunc.c
 *      author  :  deepak_jangra
 *      created :  2021 May 08 06:41:11  IST
 *      lastMod :  Saturday 08 May 2021 06:41:11 PM IST
 **/

#include"header.h"
#include"declaration.h"

void* exitFunc(void* arg)
{
  printf("%s : Begin\n",__func__);

  if(strncmp((void*)arg,"success", 7) == 0)
    exit(EXIT_SUCCESS);
  if(strncmp((void*)arg,"failure", 7) == 0)
    exit(EXIT_FAILURE);
  
  printf("%s : End\n",__func__);
  return 0;
}    

