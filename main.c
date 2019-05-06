#include <stdio.h>
#include <stdlib.h>
#define size 10
struct stack1{
int top;
int data[size];
};
int i;
int main()
{
   struct  stack1 s;
   s.top=-1;
   pop(&s);
      printf("-------------------------------------------------------------\n");

      push(&s,1);
      push(&s,2);
      push(&s,3);
      push(&s,4);
      push(&s,5);
      push(&s,6);
      push(&s,7);
      push(&s,8);
      push(&s,9);


   show(&s);
   printf("-------------------------------------------------------------\n");
pop(&s);
pop(&s);
pop(&s);
show(&s);
   printf("-------------------------------------------------------------\n");

push(&s,6);
      push(&s,7);
      push(&s,8);
      push(&s,9);
      show(&s);
      push(&s,9);
         printf("-------------------------------------------------------------\n");

      show(&s);
            push(&s,9);



void push( struct stack1 *s,int n);
 void pop(struct stack1 *s);
 void show(struct stack1 *s);

return 0;
}
void push( struct stack1 *s,int n){
     if(s->top==size-1){
            printf("stack is full \n");

     }
else{
    (s->top)++;
s->data[s->top]=n;
}
 }
 void pop(struct stack1 *s){
      if(s->top==-1){
            printf("stack is empty \n");


     }
     else{
            (s->top)--;
     }
 }
 void show(struct stack1 *s){
     if(s->top==-1){
            printf("stack is empty \n");
     }
     else{
for(i=s->top;i>=0;i--){
        printf("%d \n",s->data[i]);
}
 }
 }

