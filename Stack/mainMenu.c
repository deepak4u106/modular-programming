/**
 *      file    :  mainMenu.c
 *      author  :  deepak_jangra
 *      created :  2021 May 08 06:44:10  IST
 *      lastMod :  Saturday 08 May 2021 06:44:10 PM IST
 **/

#include"header.h"
#include"declaration.h"

void* mainMenu(void* arg)
{
  int i;
  stack *stk;
  printf("%s : Begin\n",__func__);

  stk = (stack*)arg;




  printf("__MAIN MENU__\n");
if(!stk)
  printf("1: Create Stack               \n");
else if(stk)
{
  printf("2: Push elements into Stack   \n");
  printf("3: Pop element from Stack     \n");
  printf("4: Dislay Stack               \n");
  printf("5: Search into Stack          \n");
  printf("6: Destroy Stack              \n");
}
  printf("0: Exit Progam                \n");
  printf("Enter the choice\n");

  scanf("%d", &i);

if(i == 0)
  (*fptr[i+1])((void*)"success");
  
else if(i == 1)
  arg = (stack*)(*fptr[i+1])(arg); //createStack

else if((i >= 2) && (i<= 6))
  (*fptr[i+1])(arg);

  printf("%s : End\n",__func__);
  return arg;
}    

