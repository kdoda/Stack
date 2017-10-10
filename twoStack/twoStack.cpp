#include "twoStack.h"
#include<iostream>
#include <cstdlib>
using namespace std;

template<class var>
twoStack<var>::twoStack(int sA,int sB)
{
    length=sA+sB;
    topA=-1;
    topB=length; //indxi jasht vektorit ,fillon nga fundi afrohet para

    if(length!=0)
        stackArray=new var[length];
    else
        stackArray=NULL;

}
/* se di pse spuno
template<class var>
void twoStack<var>::increaseLength()
{
    length*=2;
    var *temp= new var[length]; //alokojme vend sa dyfishi i meparshem

    for(int i=0;i<=topA;i++)
        temp[i]=stackArray[i]; //kopjojme stackA

    for(int i=length-1;i>=topB;i--) //kopjojme stackB
        temp[i]=stackArray[i];

    delete []stackArray;

    stackArray=temp;
} */


template<class var>
void twoStack<var>::pushA(var x)
{
    if(isFull())
        {
    length*=2;
    var *temp= new var[length]; //alokojme vend sa dyfishi i meparshem

    for(int i=0;i<=topA;i++)
        temp[i]=stackArray[i]; //kopjojme stackA

    for(int i=length/2-1;i>=topB;i--) //kopjojme stackB
        temp[2*i+1]=stackArray[i];

    delete []stackArray;

    stackArray=temp;
        }

    stackArray[++topA]=x; //inkremento pastaj shto
}

template<class var>
void twoStack<var>::pushB(var x)
{
    if(isFull())
        {
    length*=2;
    var *temp= new var[length]; //alokojme vend sa dyfishi i meparshem

    for(int i=0;i<=topA;i++)
        temp[i]=stackArray[i]; //kopjojme stackA

    for(int i=length/2-1;i>=topB;i--) //kopjojme stackB
        temp[2*i+1]=stackArray[i];

    delete []stackArray;

    stackArray=temp;
        }

    stackArray[--topB]=x; //dekrementojme pastaj shto ,sepse po hecim mbrapa
}

template<class var>
int twoStack<var>::getSizeA()
{
    return topA+1;
}

template<class var>
int twoStack<var>::getSizeB()
{
    return length-topB;

}

template<class var>
bool twoStack<var>::isFull()
{
    return (topB==topA+1); //nqs jan ne indexe te njepasnjeshme do te thot qe eshte mbushur plot
}

template<class var>
bool twoStack<var>::isEmptyA()
{
    return (topA==-1);
}

template<class var>
bool twoStack<var>::isEmptyB()
{
    return (topB==length);
}


template<class var>
var twoStack<var>::popA()
{
    if(isEmptyA())
    {
        cout<<"lista eshte bosh ne kete pike";
        exit(1);
    }

    topA--;
    return stackArray[topA+1];
}

template<class var>
var twoStack<var>::popB()
{
    if(isEmptyB())
    {
        cout<<"lista eshte bosh ne kete pike";
        exit(1);
    }

    topB++;
    return stackArray[topB-1];
}











