#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
class Node
{
  public:
 	int data;
 	class Node *next;
};
Node* first = new Node();
void create(int A[],int n)
{
 int i;
 class Node *t,*last;
 first->data=A[0]; 
 first->next=NULL;
 last=first;

 for(i=1;i<n;i++)
 {
 t=(class Node*)malloc(sizeof(class Node));
 t->data=A[i];
 t->next=NULL;
 last->next=t;
 last=t;
 }
}
void Display(class Node *p)
{
 while(p!=NULL)
 {
 printf("%d ",p->data);
 p=p->next;
 }
}
void RDisplay(class Node *p)
{
 if(p!=NULL)
 {
 RDisplay(p->next);
 printf("%d ",p->data);

 }
}
int main()
{
 struct Node *temp;
 int A[]={3,5,7,10,25,8,32,2};
 create(A,8);

 Display(first);

 std::vector<int> v(A,A+8);
 printf("\n");
 for(int i : v){
	 std::cout << i << " ";
 }

 printf("\n");

 return 0;
}