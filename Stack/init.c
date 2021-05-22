/**
 *      file    :  init.c
 *      author  :  deepak_jangra
 *      created :  2021 May 08 06:42:55  IST
 *      lastMod :  Saturday 08 May 2021 06:42:55 PM IST
 **/

#include"header.h"
#include"declaration.h"


void* mainMenu(void*);
void* exitFunc(void*);
void* creatStack(void*);
void* pushElement(void*);
void* popElement(void*);
void* displayStack(void*);
void* searchStack(void*);
void* destroyStack(void*);
void* linearSearch(void*);
void* binarySearch(void*);
void* (*fptr[NOF])(void*);



int init()
{
  printf("%s : Begin\n",__func__);


  fptr[0] = mainMenu;
  fptr[1] = exitFunc;
  fptr[2] = creatStack;
  fptr[3] = pushElement;
  fptr[4] = popElement;
  fptr[5] = displayStack;
  fptr[6] = searchStack;
  fptr[7] = destroyStack;
  fptr[8] = linearSearch;
  fptr[9] = binarySearch;


  printf("%s : End\n",__func__);
  return 0;
}    

