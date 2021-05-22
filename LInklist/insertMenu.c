/**
 *      file    :  insertMenu.c
 *      author  :  deepak_jangra
 *      created :  2021 May 02 05:03:42  IST
 *      lastMod :  Sunday 02 May 2021 05:03:42 PM IST
 **/

#include"header.h"
#include"declaration.h"

void* insertMenu(void* arg)
{
  int i;
  printf("%s : Begin\n",__func__);

  printf("1: Insert node in the begining                \n");
  printf("2: Insert node in the End                     \n");
  printf("3: Insert node on Key                         \n");
  printf("4: Insert node at Nth location from start     \n");
  printf("5: Insert node Kth location from from end.    \n");
  
  printf("Enter the choice\n");
  scanf("%d", &i);

  if(i >= 1 && i <= 4)
    (*fptr[i + 6])(arg);
  if(i == 5)
    (*fptr[16])(arg);

  printf("%s : End\n",__func__);
  return arg;
}    

