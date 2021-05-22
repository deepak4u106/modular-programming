/**
 *      file    :  insertBeg.c
 *      author  :  deepak_jangra
 *      created :  2021 May 02 05:10:11  IST
 *      lastMod :  Sunday 02 May 2021 05:10:11 PM IST
 **/

#include"header.h"
#include"declaration.h"

void* insertBeg(void* arg)
{
  printf("%s : Begin\n",__func__);

  node* strt = (node*)arg;


  node* newNode = (*fptr[2])(arg);
 
  newNode->next = strt->next;
  strt->next = newNode;

  printf("%s : End\n",__func__);
  return arg;
}    

