#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node* next;
};
struct node* top = NULL;
void push(int x) {
struct node* newnode = (struct node*)malloc(sizeof(struct node));
newnode->data = x;
newnode->next = top;
top = newnode;
printf("Inserted: %d\n", x);
}
void pop() {
if(top == NULL)
printf("Stack Underflow\n");
else {
struct node* temp = top;
printf("Deleted: %d\n", top->data);
top = top->next;
free(temp);
}
}
void display() {
struct node* temp = top;
if(temp == NULL)
printf("Stack is Empty\n");
else {
while(temp != NULL) {
printf("%d ", temp->data);
temp = temp->next;
}
printf("\n");
}
}
int main() {
push(5); push(15); push(25);
display();
pop();
display();
return 0;
}
