/**
 *      file    :  deleteNth.c
 *      author  :  deepak_jangra
 *      created :  2021 May 02 05:10:11  IST
 *      lastMod :  Sunday 02 May 2021 05:10:11 PM IST
 **/

#include"header.h"
#include"declaration.h"

void* deleteNth(void* arg)
{
  int n,i = 1;
  printf("%s : Nthin\n",__func__);
    
  node* strt;
  node* curr;

  strt = curr = (node*)arg;

  curr = strt->next;
  printf("Enter the location to delete the node\n");
  scanf("%d", &n);

  while(i < n)
  {
    i++;
    strt = strt->next;
    curr = curr->next;
  }

  strt->next = curr->next;
  free(curr);






  printf("%s : End\n",__func__);
  return arg;
}    

