/**
 *      file    :  deleteNode.c
 *      author  :  deepak_jangra
 *      created :  2021 May 02 05:12:58  IST
 *      lastMod :  Sunday 02 May 2021 05:12:58 PM IST
 **/

#include"header.h"
#include"declaration.h"

void* displayNode(void* arg)
{
  printf("%s : Begin\n",__func__);


  node* pnode;
  pnode = (node*)arg;


  if(!pnode)
  {
    printf("Link list is not created\n");
    goto RET;
  }
  if(!pnode->next)
  {
    printf("LInk list is empty\n");
    goto RET;
  }
  int i = 1;
  while(pnode->next != NULL)
  { 
    pnode = pnode->next;
    printf("DATA %d : %d\n",i ,pnode->data);
    i++;
  
  }

 RET:   
  printf("%s : End\n",__func__);
  return arg;
}    

