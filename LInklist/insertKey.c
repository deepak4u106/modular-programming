/**
 *      file    :  insertKey.c
 *      author  :  deepak_jangra
 *      created :  2021 May 02 05:10:11  IST
 *      lastMod :  Sunday 02 May 2021 05:10:11 PM IST
 **/

#include"header.h"
#include"declaration.h"

void* insertKey(void* arg)
{
  int key;
  printf("%s : Begin\n",__func__);

  node* strt = (void*)arg;

  node* newNode = (*fptr[2])(arg);
  printf("Enter the KEY\n");
  scanf("%d",&key);

  while(strt->data != key)
  {
    strt = strt->next;
    
    if(strt->next == NULL)
    {
        printf("Key not found in the Link list\n");
        goto RET;
    }
  
  }

  newNode->next = strt->next;

  strt->next = newNode;

  
RET:
  printf("%s : End\n",__func__);
  return arg;
}    

