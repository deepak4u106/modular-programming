#ifndef NOF
#define NOF 20
#endif
static int count = 100;

typedef struct node
{
    int data;
    struct node* next;
}node;

int init();
extern void* mainMenu(void*);
extern void* exitFunc(void*);

extern void* createNode(void*);
extern void* insertNode(void*);
extern void* deleteNode(void*);
extern void* displayNode(void*);
extern void* sortNode(void*);

extern void* nodeMenu(void*);

extern void* insertBeg(void*);
extern void* insertEnd(void*);
extern void* insertKey(void*);
extern void* insertNth(void*);
extern void* insertKth(void*);

extern void* deleteBeg(void*);
extern void* deleteEnd(void*);
extern void* deleteKey(void*);
extern void* deleteNth(void*);
extern void* deleteKth(void*);

extern void* (*fptr[NOF])(void*);
