/**
 *      file    :  createLinklist.c
 *      author  :  deepak_jangra
 *      created :  2021 May 02 04:46:00  IST
 *      lastMod :  Sunday 02 May 2021 04:46:00 PM IST
 **/

#include"header.h"
#include"declaration.h"

void* createLinklist(void* arg)
{
  printf("%s : Begin\n",__func__);

  node *strt = (node*)arg;

  node* newNode = (*fptr[2])(arg); 

  
  
  printf("%s : End\n",__func__);
  return newNode;
}    

