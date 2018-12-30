#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
cout<<"mencari bilangan terbesar"<<endl;
cout<<endl;
int a,b,c;
   cout<< "masukan bilangan pertama = ";cin>>a;
   cout<< "masukan bilangan kedua = ";cin>>b;
   cout<< "maukan bilangan ketiga = ";cin>>c;
   cout<<endl;
   if (a > b)
   {
   cout<< a <<"bilangan terbesar "<<endl;
   } else if (b > c)
   {
   cout<< b <<"bilangan terbesar "<<endl;
   }else{
   cout<< c <<"bilangan terbesar "<<endl;
}
getch();
}
