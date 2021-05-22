/**
 *      file    :  mainMenu.c
 *      author  :  deepak_jangra
 *      created :  2021 May 02 04:39:41  IST
 *      lastMod :  Sunday 02 May 2021 04:39:41 PM IST
 **/

#include"header.h"
#include"declaration.h"

void* mainMenu(void* arg)
{
  int i;
  printf("%s : Begin\n",__func__);

  node* strt = arg;

  if(!strt)
  {
    printf("1 : Create Link list\n");
    printf("0 : EXIT\n");
  }
  else
  {
    printf("2: Insert  Node\n");
    printf("3: Delete  Node\n");
    printf("4: Display Node\n");
    printf("5: Sorting  Node\n");

    printf("0: EXIT        \n");

  }

  printf("Enter the choice\n");

  scanf("%d", &i);

  if(i == 0)
    (*fptr[i + 1])((void*)"success"); // exitFunc()
  else if(i == 1)
    arg = (*fptr[i + 1])(arg);        // createLinklist()
  else if(i >= 2 && i <= 4)
          (*fptr[i + 1])(arg);// allFunc
  else if(i == 5)
          (*fptr[i + 13])(arg);// sorting




  printf("%s : End\n",__func__);
  return arg;

}    

