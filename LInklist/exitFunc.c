/**
 *      file    :  exitFunc.c
 *      author  :  deepak_jangra
 *      created :  2021 May 02 04:55:43  IST
 *      lastMod :  Sunday 02 May 2021 04:55:43 PM IST
 **/

#include"header.h"
#include"declaration.h"

void* exitFunc(void* arg)
{
  printf("%s : Begin\n",__func__);

  
  if(strncmp((char*)arg, "success", 7) == 0)
    exit(EXIT_SUCCESS);
  if(strncmp((char*)arg, "failure", 7) == 0)
    exit(EXIT_FAILURE);
  
  printf("%s : End\n",__func__);
  return 0;
}    

