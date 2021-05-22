/**
 *      file    :  searchStack.c
 *      author  :  deepak_jangra
 *      created :  2021 May 09 04:39:07  IST
 *      lastMod :  Sunday 09 May 2021 04:39:07 PM IST
 **/

#include"header.h"
#include"declaration.h"

void* searchStack(void* arg)
{
  int i;
  printf("%s : Begin\n",__func__);

  printf("____SEARCH MENU_____\n");

  printf("1 : Linear Search\n");
  printf("2 : Binary Search\n");

  printf("Enter the choice\n");
  scanf("%d", &i);

  if(i == 1 || i == 2)
    (*fptr[i + 7])(arg);
  else
    printf("Enter the valid option\n");
  



  
  printf("%s : End\n",__func__);
  return arg;
}    

