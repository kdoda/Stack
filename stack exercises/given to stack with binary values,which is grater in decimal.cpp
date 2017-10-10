/*Biti me peshen me te madhe eshte fund te stackut*/
//biti me me shum pesh kur printohet eshte djthtas kujdes!!!

#include <iostream>
#include <stack>
#include <cstdlib>
using namespace std;

template <class var>
void krahasoStack(stack<var> & ,stack<var> &);

template <class var>
void printStack(stack<var>);
int main ()
{

stack<int> s1;
stack<int> s2;

//for(int i=0;i<10;i++)  //sakte
//    {s1.push(rand()%2);
//    s2.push(rand()%2);}

 for(int i=0;i<10;i++)
 s1.push(rand()%2);

for(int i=0;i<10;i++)
 s2.push(rand()%2);

cout<<"s1:  ";
printStack(s1);

cout<<endl<<"s2:  ";
   printStack(s2);

   cout<<endl;
    krahasoStack(s1,s2);



}
template <class var>
void krahasoStack(stack<var> & s1,stack<var> & s2)
{
    stack<var> temp1,temp2;
    temp1=s1;
    temp2=s2;

    int flag=0;//flag mban 1 nqs s1>s2 ,ose -1 nqs s2>s1 dhe 0 nqs jan =

    var a,b;

    while(!temp1.empty() && !temp2.empty())
    {
        a=temp1.top();
        b=temp2.top();

        if(a>b)
          flag=1;
        else if (a<b)
            flag=-1;

        temp1.pop();
        temp2.pop();

    }

    if(temp1.empty() && temp2.empty()) ///rasti kur stack kishin te njejtin nr elementesh
    {
        if(flag==1)
         printStack(s1);
        else ///edhe po te jet stack -1 eddhe 0 printojme s2 te jemi brenda
            printStack(s2);

        return;
    }

    if(temp1.empty())
    {
        while(!temp2.empty())
        {
            if(temp2.top()==1)
              {printStack(s2);
               return;}

            temp2.pop();
        }
        if(flag==1)
         printStack(s1);
        else ///edhe po te jet stack -1 eddhe 0 printojme s2 te jemi brenda
            printStack(s2);
        return;
    }

 if(temp2.empty())
    {
        while(!temp1.empty())
        {
            if(temp1.top()==1)
              {printStack(s1);
               return;}

            temp1.pop();
        } //nqs kane qen te gjitha elementet e tjere zero do krahasojme me ate te flagut
        if(flag==1)
         printStack(s1);
        else ///edhe po te jet stack -1 eddhe 0 printojme s2 te jemi brenda
            printStack(s2);
        return;
    }
}

template <class var>
 void printStack(stack<var>  temp)
 {
    while(!temp.empty())
    {
        cout<<temp.top()<<" ";
        temp.pop();
    }

 }



