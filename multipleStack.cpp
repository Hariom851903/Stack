#include <iostream>
using namespace std;
#define N 10
int arr[N],top1=-1,top2=N;  
void push_1(int ele){
   if(top1!=top2-1)
   {
     top1++;
     arr[top1]=ele;
   }
  else{
      cout<<"Overflow"<<endl;
  }
}
void push_2(int ele){
  if(top1!=top2-1)
  {
    top2--;
    arr[top2]=ele;
    }
   else{
      cout<<"Overflow"<<endl;
  }
  
}
void pop1(){
  if(top1==-1)
  {
    cout<<"Underflow"<<endl;
  }
  else{
      cout<<arr[top1];
       top1--;
  }
}
void pop2(){
  if(top2==N)
  {
    cout<<"Underflow"<<endl;
  }
  else{
      cout<<arr[top2]<<endl;
       top2++;
  }
}
void display()
{
  if(top1==-1){
    cout<<"stack 1 is empty\n";
  }
  else{
      cout<<"Stack1"<<endl;
    for(int i=top1;i>=0;i--)
      {
        cout<<arr[i]<<" ";
      }
  }
  
  if(top2==N){
    cout<<"stack 2 is empty\n";
  }
  else{
      cout<<endl<<"Stack2"<<endl;
    for(int i=top2;i<N;i++)
      {
        cout<<arr[i]<<" ";
      }
  }
  
  
}
int main() {
      int n;
  while(true){
      int choice;
      cout<<"enter choice"<<endl;
      cout<<"1: push 1"<<endl;
      cout<<"2 :push 2"<<endl;
      cout<<"3 :pop 1"<<endl;
      cout<<"4 :pop 2"<<endl;
      cout<<"5 :display"<<endl;
      cin>>choice;
      switch(choice){
        case 1:
          cout<<"enter num :";
          cin>>n;
          push_1(n);
          break;  
        case 2:
          cout<<"enter num :";
          cin>>n;
          push_2(n);
          break; 
        case 3:
           pop1();
        break;
        case 4:
           pop2();
        break;
        case 5:
        display();
        break;
        default:
        exit(1);
        
      }
    }
}
