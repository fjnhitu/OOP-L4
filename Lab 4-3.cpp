#include<iostream>
#include<string.h>
using namespace std;
class phone
{
private:
string brand;
string model;
int price;

public:
phone()
{
brand = "Unknown";
model = "unknown";
price = 0;
}
phone(string b, string m, int p=0)
{
brand = b;
model = m;
price = p;
}
phone (phone &a)
{
brand = a.brand;
model = a.model;
price = a.price;
}
void displayInfo();
void isPremium(int p);
string getBrand()
{
return brand;
}
string getModel()
{
return model;
}
int getPrice()
{
return price;
}
~phone()
{
cout<<model<<endl;
cout<<"Object is being destroyed"<<endl;
}
};
void phone:: displayInfo()
{
cout<<"Brand = :"<<brand<<endl;
cout<<"Model = :"<<model<<endl;
cout<<"Price = : "<<price<<endl;
}

void phone::isPremium(int p)
{
if(p>=30000)
{
cout<<"This is a premium phone!"<<endl;
}
else
{
cout<<"This is a budget phone"<<endl;
}
}
int main()
{
cout<<"Enter brand name : ";
string s1;
getline(cin, s1);
cout<<endl;
cout<<"Enter model name : ";
string s2;
getline(cin, s2);
cout<<endl;
cout<<"Enter price of the phone : ";
int p1;
cin>>p1;
cout<<"Default constructor"<<endl;
phone b;
b.displayInfo();
phone b1(s1,s2,p1);
cout<<"Parameterised constructor "<<endl;
phone b2(b1);
b2.displayInfo();
cout<<"Pointer"<<endl;
phone *b3;
b3 = &b1;
b3->displayInfo();
b3->isPremium(p1);
return 0;
}
