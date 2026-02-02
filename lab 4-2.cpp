#include <iostream>
using namespace std;
class Distance{
float meter;
public:
Distance(float m)
{
meter = m;
}
void display()
{
cout << "Distance: " << meter << endl;
}
Distance(Distance &d)
{
meter = d.meter;
}
float getmeter()

{
return meter;
}
};
float addDistance(Distance a, Distance b)
{
float sum = a.getmeter() + b.getmeter();
return sum;
}
int main()
{
cout << "Enter two distance: " << endl;
float c;
cin >> c;
Distance p(c);
Distance q(p);
p.display();
cout << "Total distance: " << addDistance(p, q) << endl;
return 0;
}
