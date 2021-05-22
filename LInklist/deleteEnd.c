/**
 *      file    :  deleteEnd.c
 *      author  :  deepak_jangra
 *      created :  2021 May 02 05:10:11  IST
 *      lastMod :  Sunday 02 May 2021 05:10:11 PM IST
 **/

#include"header.h"
#include"declaration.h"

void* deleteEnd(void* arg)
{
  printf("%s : Endin\n",__func__);

  node* strt = (node*)arg;

  node* curr = (node*)malloc(sizeof(node));

  curr = strt->next;





  while(curr->next != NULL)
  {
    curr = curr->next;
    strt = strt->next;
  }
  strt->next = NULL;

  free(curr);





  
  printf("%s : End\n",__func__);
  return arg;
}    

