#include<iostream>
#include<string>
using namespace std;
class student{
private:
   string name;
   int rollNumber;
   float marks;
public:
   student(string n, int r, float m)
   {
    name=n;
    rollNumber=r;
    marks=m;
   }
   void display()
   {
    cout<<"Student name: "<<name<<endl;
    cout<<"Roll number: "<<rollNumber<<endl;
    cout<<"Marks: "<<marks<<endl;
   }
   float update(float k)
   {
    marks =k;
    return marks;
   }
};

int main()
{
    string a;
    int b;
    float c;
    cout<<"Enter student name"<<endl;
    getline(cin, a);
    cout<<"Enter roll number"<<endl;
    cin>>b;
    cout<<"Enter Marks"<<endl;
    cin>>c;

    student ob(a,b,c);
    ob.display();
    float d;
    cout<<"Update Marks"<<endl;
    cin>>d;

    return 0;
}