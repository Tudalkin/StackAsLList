#include "StackAsLList.h"
#include <iostream>
using namespace std;

StackAsLList::StackAsLList(){
  top=nullptr;
}
StackAsLList::~StackAsLList(){
  ClearStack();
}
void StackAsLList::ClearStack(){
  while(top!=nullptr){
    Pop();
  }
  top=nullptr;
}
bool StackAsLList::Push(char ch){
  StackNode *newNode;
  newNode=new StackNode();
  newNode->ch=ch;
  newNode->next=nullptr;
  if(isEmpty()){
    top=newNode;
  }else{
    newNode->next=top;
    top=newNode;
  }
  return true;
}
char StackAsLList::Pop(){

  if(isEmpty()) return '\0';

  char ch;
  struct StackNode *temp;
  temp=top;
  top=top->next;

  ch=temp->ch;
  delete temp;
  temp=nullptr;
  return ch;
}
bool StackAsLList::isEmpty(){
  return(top==nullptr);
}
bool StackAsLList::isFull(){
  return false;
}