#include "IntStack.h"
#include <cstdlib>
#include <iostream>
using namespace std;
IntStack::IntStack(int size)
{

    stackSize=size;
    top=-1;

    if(size!=0)
      stackArray=new int[size];
    else
      stackArray=NULL;
}


void IntStack::push(int x)
{
    if(isFull())
    increaseLength();

    stackArray[++top]=x;  //para inkementimi

}

void IntStack::pop(int &x)
{
  if(isEmpty())
  {
      cout<<"stiva eshte bosh ne kete pike,program terminated";
      exit(1);
  }else
    x=stackArray[top--];  //pas kujdes,pasi ta marresh ta dekrementosh

}

bool IntStack::isEmpty(void)
{
   return (top==stackSize-1);
}

bool IntStack::isFull(void)
{
   return (top==-1);
}

void IntStack::increaseLength()
{
    stackSize*=2;
    int *p=new int[stackSize]; //alokojm vend sa dyfishi i meparshem

    for(int i=0;i<stackSize;i++)  //kopjojme elementet
        p[i]=stackArray[i];

    delete []stackArray;   //lirojme memorien e vek te meparshem

    stackArray=p;    //i japim pointer qe pointon te memoriaa e re ne heap

}






























