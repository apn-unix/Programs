#include<stdio.h>
#include<stdlib.h>
#include<memory.h>

struct node{
    
     int data;
     struct node *next;
};
  
struct node *head=NULL;
struct node *start=NULL;
struct node *end=NULL;
void create();
void insertBet();
void insertStrt();
void insertEnd();
void display();

int main()
{

  
  int choice=0;
   char ch;

  printf("1.Create\n");
  printf("2.InsertInBetween\n");
  printf("3.InsertAtStart\n");
  printf("4.InsertAtEnd\n");
  printf("5.Display\n");
  printf("6.Exit\n");
  
  while(1){
     
     printf("Enter Your Choice=\n");
     scanf("%d",&choice);
     switch(choice){
  
      case 1:
            create();
            continue;
      case 2:
            insertBet();
            continue;
      case 3:
            insertStrt();
            continue;
      case 4:
            insertEnd();
            continue;
      case 5:
            display();
            continue;
      case 6:
            exit(EXIT_SUCCESS);
            
       
      default:
            printf("Enter Correct Choice\n");
            continue;

     }
    
   }

}

void create(){
int num;
int i=0;
int n;
printf("Enter How many numbers=\n");
scanf("%d",&num);
for(i=0;i<num;i++){
  struct node *node;
  node=(struct node *)malloc(sizeof(struct node));
  if(node == NULL)
  {
    exit(EXIT_FAILURE);
  }
  printf("Enter Number=");
  scanf("%d",&n);
  node->data=n;
  node->next=NULL;
  if(head==NULL)
   {
     
     head=node;
     start=head;
     end=head;
   }
   else
  {
    
    struct node *tmp;
     tmp=head;
     while(tmp->next!=NULL){
          
          tmp=tmp->next;
     }
    tmp->next=node;
    
  }

 }



}

void insertBet(){
printf("Insert Bet\n");

}

void insertStrt(){
printf("Insert start\n"); 

}
void insertEnd(){


}

void display(){
struct node *tmp1=NULL;
tmp1=head;
while(tmp1!=NULL)
{
  
  printf("%d\n",tmp1->data);
  tmp1=tmp1->next;
}

}


