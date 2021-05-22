/**
 *      file    :  sortNode.c
 *      author  :  deepak_jangra
 *      created :  2021 May 10 03:29:26  IST
 *      lastMod :  Monday 10 May 2021 03:29:26 PM IST
 **/

#include"header.h"
#include"declaration.h"

void* sortNode(void* arg)
{
  int temp;
  printf("%s : Begin\n",__func__);

  node* strt = (void*)arg;

  node* curr = (void*)arg;


  while(strt->next != NULL)
  {
    curr = strt->next;
    strt = strt->next;
    while(curr->next != NULL)
    {
      curr = curr->next;
      if(strt->data > curr->data)
      {
        temp = strt->data;
        strt->data = curr->data;
        curr->data = temp;
      }
    }
  }



  printf("%s : End\n",__func__);
  return arg;
}    

