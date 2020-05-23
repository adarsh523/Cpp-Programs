#include <iostream>
using namespace std;
class Point
{
private:
    int x,y;
public:
    Point()
    {
        x=0;
        y=0;
    }
    Point(int x1,int y1)
    {
        x=x1;
        y=y1;
    }
    Point(const Point &p2)  //copy constructor
    {
        x=p2.x;
        y=p2.y;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    void swap(Point & newp1,Point & newp2)
    {
        Point temp=newp1;
        newp1=newp2;
        newp2=temp;
    }
};
int main()
{
    Point P;
    Point p1(11,16);   //normal constructor called here
    Point p2=p1;       //copy constructor called here
    cout<<"before swap\n";
    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
    cout << "\np2.x = " << p2.getX() << " p2.y = " << p2.getY();
    swap(p1,p2);       //as we are passing the binder so we have to write * before the s1 and s2.
    cout<<"\nafter the swapping\n";
    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
    cout << "\np2.x = " << p2.getX() << " p2.y = " << p2.getY();
    return 0;
}
