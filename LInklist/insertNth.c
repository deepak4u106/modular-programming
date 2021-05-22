/**
 *      file    :  insertNth.c
 *      author  :  deepak_jangra
 *      created :  2021 May 02 05:10:11  IST
 *      lastMod :  Sunday 02 May 2021 05:10:11 PM IST
 **/

#include"header.h"
#include"declaration.h"

void* insertNth(void* arg)
{
  int n,i = 1;
  printf("%s : Nthin\n",__func__);

  node* curr;
  node* strt ;
  strt = curr = (void*)arg;

  node* newNode = (*fptr[2])(arg); //createNode
  printf("Enter the location to insert the node\n");
  scanf("%d", &n);

  while(i < n)
  {
    
    if(curr->next == NULL)
    {
      printf("Node not found\n");
      goto RET;
    }
    
    i++;
    curr = curr->next;
  
  
  }
  newNode->next = curr->next;
  curr->next = newNode;
RET:
  printf("%s : End\n",__func__);
  return arg;
}    

