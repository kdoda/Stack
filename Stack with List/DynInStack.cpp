#include "DynInStack.h"
#include<cstdlib>

using namespace std;

DynIntStack::DynIntStack(const DynIntStack & other) //konstruktori i kopjes
{

    top=NULL; //duhet kjo nqs lista tj eshte bosh
    kopjo(other.top);
}

void  DynIntStack::kopjo(StackNode *current) //e kopjon me O(n) super, merr headin
{
    if(current==NULL)
        return;

    kopjo(current->next);

    push(current->value);
}

DynIntStack::~DynIntStack()
{
    StackNode *current=top;
    while(top!=NULL)
    {
        current=top;
        top=top->next;
        delete current;
    }
}
bool DynIntStack::isEmpty()
{
    return(top==NULL);  //ose direkt vetem top kthe
}

void DynIntStack::push(const int &x){

    StackNode *current=new StackNode;  //edhe nqs eshte bosh punosepse top eshte null
    current->value=x;
    current->next=top;
    top=current;
}

void DynIntStack::pop(int & x)  //x variabli i main qe ja mbivendos
{
    if(isEmpty())
    {
        cout<<"stacku eshte bosh";
        exit(1);
    }
    else
    {
        x=top->value;
        StackNode *temp=top;
        top=temp->next;
        delete temp;
    }
}

DynIntStack& DynIntStack::operator=(const DynIntStack & other)
{
    if(this != &other)
    {
        if(!isEmpty())  //nqs eshte bosh qe mos ta zej kot memorien e heap
        {

            StackNode *current;  //fshije listen qe kishe
            while(top!=NULL)
            {

                current=top;
                top=top->next;
                delete current;
            }
            //kur del top eshte null
        }

        top=NULL; //duhet kjo nqs lista tj eshte bosh
        kopjo(other.top);
    }
    return *this;
}

void DynIntStack::zhvendosFill(const int & pos){

    StackNode *current=top;
    if(pos>1)  //po qe 1 e le listen sic este,po qe me e vogel sben asgje
    {

    for(int i=1;i<=pos-2;i++) //duhet 2 posicion para qe te ndalojm qe te krijojme lidhjen
        current=current->next;

    if(current->next==NULL) //sepse max mund te shkojme te node i parafunit ,nqs kemi shkuar te i fundit do tthot qe ka dhenje nje index jashte listes
        {
            cout<<"pos i pavlefshem";
            exit(1);
        }
    //qe ne kete pik te jemi te node para asaj qe duam te ndryshojm
    StackNode *afterCurr=current->next;

    current->next=afterCurr->next; //ose dy het next next

    afterCurr->next=top;
    top=afterCurr;
    }
}















