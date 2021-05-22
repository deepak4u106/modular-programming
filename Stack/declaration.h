#ifndef NOF 
#define NOF 10
#endif

typedef struct stack
{
  int size;
  int* stkptr;
  int top;
}stack;

int init();
extern void* mainMenu(void*);
extern void* exitFunc(void*);
extern void* creatStack(void*);
extern void* pushElement(void*);
extern void* popElement(void*);
extern void* displayStack(void*);
extern void* searchStack(void*);
extern void* destroyStack(void*);
extern void* linearSearch(void*);
extern void* binarySearch(void*);




extern void* (*fptr[NOF])(void*);
