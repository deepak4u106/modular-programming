/**
 *      file    :  deleteMenu.c
 *      author  :  deepak_jangra
 *      created :  2021 May 02 05:03:42  IST
 *      lastMod :  Sunday 02 May 2021 05:03:42 PM IST
 **/

#include"header.h"
#include"declaration.h"

void* deleteMenu(void* arg)
{
  int i;
  printf("%s : Begin\n",__func__);

  printf("1: Delete node in the begining                \n");
  printf("2: Delete node in the End                     \n");
  printf("3: Delete node on Key                         \n");
  printf("4: Delete node at Nth location from start     \n");
  printf("5: Delete node Kth location from from end.    \n");
  
  printf("Enter the choice\n");
  scanf("%d", &i);

  if(i >= 1 && i <= 4)
    (*fptr[i + 11])(arg);
  else if(i == 5)
    (*fptr[17])(arg);
  
  printf("%s : End\n",__func__);
  return arg;
}    

