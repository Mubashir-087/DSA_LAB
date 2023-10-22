#include<iostream>
using namespace std;
int main()
{
int* p, *q;
p=new int;
*p=43;
q=p;
*q=52;
cout<<"\np :"<<p<<endl<<"q :"<<q;
cout<<endl;
cout<<"\n*p :"<<*p<<endl<<"*q :"<<*q;

cout<<endl;
cout<<endl;
cout<<endl;

delete p;
//Using the delete operator on an object deallocates its memory.
// A program that dereferences a pointer after the object is deleted
// can have unpredictable results or crash.(Dangling pointer)

cout<<"\np :"<<p<<endl<<"q :"<<q;
cout<<endl;
cout<<"\n*p :"<<*p<<endl<<"*q :"<<*q;

return 0;
}
