/**
 *      file    :  init.c
 *      author  :  deepak_jangra
 *      created :  2021 May 02 04:42:05  IST
 *      lastMod :  Sunday 02 May 2021 04:42:05 PM IST
 **/

#include"header.h"
#include"declaration.h"


void* mainMenu(void*);
void* exitFunc(void*);

void* createNode(void*);
void* insertNode(void*);
void* deleteNode(void*);
void* displayNode(void*);
void* sortNode(void*);

void* insertMenu(void*);

void* insertBeg(void*);
void* insertEnd(void*);
void* insertKey(void*);
void* insertNth(void*);
void* insertKth(void*);

void* deleteMenu(void*);

void* deleteBeg(void*);
void* deleteEnd(void*);
void* deleteKey(void*);
void* deleteNth(void*);
void* deleteKth(void*);

void* (*fptr[NOF])(void*);


int init()
{
  printf("%s : Begin\n",__func__);

  fptr[0]  = mainMenu;
  fptr[1]  = exitFunc;

  fptr[2]  = createNode;
  fptr[3]  = insertNode;
  fptr[4]  = deleteNode;
  fptr[5]  = displayNode;

  fptr[6]  = insertMenu;


  fptr[7]  = insertBeg;
  fptr[8]  = insertEnd;
  fptr[9]  = insertKey;
  fptr[10] = insertNth;

  fptr[11] = deleteMenu;

  fptr[12] = deleteBeg;
  fptr[13] = deleteEnd;
  fptr[14] = deleteKey;
  fptr[15] = deleteNth;

  fptr[16] = insertKth;
  fptr[17] = deleteKth;

  fptr[18] = sortNode;

  printf("%s : End\n",__func__);
  return 0;
}    

