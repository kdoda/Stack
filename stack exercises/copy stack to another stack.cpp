#include <iostream>
#include <stack>

using namespace std;

template<class var>
void kopjo(stack<var>&,stack<var>&);

int main()
{
    stack<int> st1,st2;
   for(int i=5;i>0;i--)
    st1.push(i);

   kopjo(st2,st1);

   while(!st1.empty())
   {
       cout<<st1.top()<<"  ";
       st1.pop();
   }
   cout<<endl;
   while(!st2.empty())
   {
       cout<<st2.top()<<"  ";
       st2.pop();
   }

}

template<class var>
void kopjo(stack<var>& s2 ,stack<var> &s1) ///kopjo te s2 s1
{
    if(&s2==&s1)  ///krahasojme adresat qe te shmangim s1=s1;
        return ;

    stack<var> temp;

    while(!s2.empty()) ///fshijme listen ekzistuese qe mos ti mbivendosen vlerat e listest tjeter
        s2.pop();

    while(!s1.empty())
    {
        temp.push(s1.top());
        s1.pop();
    }

    while(!temp.empty())
    {
        s1.push(temp.top());
        s2.push(temp.top());
        temp.pop();
    }

}






