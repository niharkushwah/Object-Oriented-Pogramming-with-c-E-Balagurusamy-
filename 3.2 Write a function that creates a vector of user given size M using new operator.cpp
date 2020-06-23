#include<iostream>

using namespace std;
int main()
{
void memory(int);
cout<<"Enter Memory M you Want to create:-";
int size;
cin>>size;
memory(size);
}


//MEMORY functionvoid memory(int s)
float main()
{
int *m = newint[s];
if(m!=null)
    {
    cout<<"\nWe are Successfull";
   cout<<"\n\n\n\n\tNow You Want to Delete This Created Memory";
   cout<<"\n\n\tEnter Y or y for Deleting else anything:-";
   char ch;
   cin>>ch;
       if(ch=='y' || ch=='Y')
          {
             delete[]m;
            cout<<"\n\n\n\tCreated Memory is Delete";
         }
      else
          cout<<"\n\n\tOK, your Memory is Safe";
   }
else
    cout<<"\nWe are UN-Successfull";
}

