/**
 *      file    :  deleteBeg.c
 *      author  :  deepak_jangra
 *      created :  2021 May 02 05:10:11  IST
 *      lastMod :  Sunday 02 May 2021 05:10:11 PM IST
 **/

#include"header.h"
#include"declaration.h"

void* deleteBeg(void* arg)
{
  printf("%s : Begin\n",__func__);

  node* strt;
  node* curr;
  strt = curr = (node*)arg;


  curr = strt->next;

  strt->next = curr->next;

  free(curr);



  printf("%s : End\n",__func__);
  return arg;
}    

