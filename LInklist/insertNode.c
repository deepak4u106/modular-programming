/**
 *      file    :  insertNode.c
 *      author  :  deepak_jangra
 *      created :  2021 May 02 04:58:09  IST
 *      lastMod :  Sunday 02 May 2021 04:58:09 PM IST
 **/

#include"header.h"
#include"declaration.h"

void* insertNode(void* arg)
{
  printf("%s : Begin\n",__func__);

 
  (*fptr[6])(arg);

  
  printf("%s : End\n",__func__);
  return arg;
}    

