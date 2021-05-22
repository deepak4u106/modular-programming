/**
 *      file    :  deleteKth.c
 *      author  :  deepak_jangra
 *      created :  2021 May 04 09:48:08  IST
 *      lastMod :  Tuesday 04 May 2021 09:48:08 AM IST
 **/

#include"header.h"
#include"declaration.h"

void* deleteKth(void* arg)
{
  int i = 1,j = 1;
  int loc;
  printf("%s : Begin\n",__func__);

  node* strt;

  node* curr;

  strt = curr = (node*)arg;

  while(strt->next != NULL)
  {
    i++;
  }
  printf("THE VALUE OF I : %d\n", i);
  printf("Enter the location from back to delete the node\n");
  scanf("%d", &loc);
  strt = curr = (node*)arg;
  curr = strt->next;

  while(j < loc - i)
  {
  
    curr = curr->next;
    strt = strt->next;
  
  }

  strt->next = curr->next;
  free(curr);
  
  
  printf("%s : End\n",__func__);
  return arg;
}    

