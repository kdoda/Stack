//implemento dy stack ne nje vektor
#include <iostream>
#include "twoStack.h"
#include "twoStack.cpp"
using namespace std;

int main()
{
    twoStack<int> p(1,4);

    for(int i=1;i<=5;i++)
        {
         p.pushB(2*i);
         p.pushA(i);
        }

     for(int i=0;i<5;i++)
        {
         cout<<"l1:"<<p.popA()<<"  l2:"<<p.popB()<<endl;
         }
}
