/**
 *      file    :  insertEnd.c
 *      author  :  deepak_jangra
 *      created :  2021 May 02 05:10:11  IST
 *      lastMod :  Sunday 02 May 2021 05:10:11 PM IST
 **/

#include"header.h"
#include"declaration.h"

void* insertEnd(void* arg)
{
  printf("%s : Endin\n",__func__);


  node* strt;
  node* last;
  strt = last = (node*)arg;

  node* newNode = (*fptr[2])(strt);


  while(last->next != NULL)
    last = last->next;

  last->next = newNode;
  
  
  printf("%s : End\n",__func__);
  return arg;
}    

