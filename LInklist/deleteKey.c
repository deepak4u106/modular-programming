/**
 *      file    :  deleteKey.c
 *      author  :  deepak_jangra
 *      created :  2021 May 02 05:10:11  IST
 *      lastMod :  Sunday 02 May 2021 05:10:11 PM IST
 **/

#include"header.h"
#include"declaration.h"

void* deleteKey(void* arg)
{
  int key;
  printf("%s : Begin\n",__func__);

  printf("Enter the Key to delete that node\n");
  scanf("%d", &key);

  node* strt;
  node* curr;

  strt = curr = (node*)arg;

  curr = strt->next;

  while(curr->data != key)
  {
    curr = curr->next;
    strt = strt->next;
    if(curr->next == NULL)
      goto RET;
  }
  strt->next = curr->next;

  free(curr);

RET:
  printf("%s : End\n",__func__);
  return arg;
}    

