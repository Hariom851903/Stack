#include <iostream>
using  namespace std;
int stack[5];
int Max=5,top=-1;
int isfull()
{
  if(top==Max-1)
  {
    return 1;
  }
  else{
    return 0;
  }
  }
int isempty()
{
   if(top==-1)
   {
     return 1;
   }
  else{
    return 0;
  }
}
void push(int data)
{
  if(isfull())
  {
       cout<<"Stack overflow"<<endl;
  }
  else{
     stack[top+1]=data;  
    top++;
  }
}
int pop()
{

   if(isempty())
   {
     cout<<"Stack is empty"<<endl;
   }
  else{
      return stack[top];
      
  }
}
void display()
{
  if(isempty())
  {
    cout<<"Stack is empty"<<endl;
    }
  else{
    cout<<"Stack element are="<<endl;
    for(int i=top;i>=0;i--)
      {
        cout<<stack[i]<<" ";
      } 
    
  }
    
  }
int peek()
{
  if(isempty())
  {
     cout<<"Stack is empty"<<endl;
  }
  else{
    cout<<"Topmost value is="<<endl;
    return stack[top];
  }
}
int main()
{
  int ch,val;
  cout<<"1) Push in stack"<<endl;
  cout<<"2) Pop in stack"<<endl;
  cout<<"3) Display in stack"<<endl;
  cout<<"4) Peek in stack"<<endl;
  cout<<"5) exit"<<endl;
   do{ 
  cout<<"Enter your choice=";
  cin>>ch;
   switch(ch)
     {
       case 1:
         {
        cout<<"Enter element pushed=";
       cin>>val;
          push(val);
        break;
           }
       case 2:
         {
          cout<<"Pop element is="<<pop()<<endl; 
           top--;
        break;
           } 
       case 3:
         {
           display();
        break;
           }
       case 4:{
           cout<<peek()<<endl;
        break;
         }
       case 5:{
           cout<<"Exit"<<endl;
            break;
         }
       default: {
         cout<<"Invaild choice"<<endl;
       }
            
      }
    }while(ch!=5);  
}
