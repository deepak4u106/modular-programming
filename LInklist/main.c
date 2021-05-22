/**
 *      file    :  main.c
 *      author  :  deepak_jangra
 *      created :  2021 May 02 04:38:25  IST
 *      lastMod :  Sunday 02 May 2021 04:38:25 PM IST
 **/

#include"header.h"
#include"declaration.h"

int main()
{
  printf("%s : Begin\n",__func__);

  init();
  node *strt;
 
  while(1)
    strt =  (node*)(*fptr[0])((void*)strt);
  
  printf("%s : End\n",__func__);
  return 0;
}    

