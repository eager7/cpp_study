#include <iostream>
#include <signal.h>

using namespace std;

class point
{
    double x;
    double y;
public:
    double get_x()
    {
        return x;
    }
    double get_y()
    {
        return y;
    }
    point(double X = 0.0 , double Y = 0.0):x(X),y(Y){};
    friend point operator -(point p1,point p2);
    friend ostream& operator<< (ostream&, point&);
    point operator +(point p);
};
//重载操作符“-”
point operator -(point p1,point p2)
{
    double x = p1.get_x() - p2.get_x();
    double y = p1.get_y() - p2.get_y();
    point p3(x,y);
    return p3;
}
//重载操作符“+”
point point::operator +(point p)
{
    double x = this->x + p.x;
    double y = this->y + p.y;
    point tmp_p(x,y);
    return tmp_p;
}

ostream& operator<< (ostream &out, point &point)
{
    out << "123"<< ":" << "456";
    return out;
}

int main()
{
    cout << "Hello, World!" << endl;

    point myP;
    cout <<"server:"<< myP << endl;
    //cout <<"server:"<< (point)myP << endl;
}