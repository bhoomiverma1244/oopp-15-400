//friend 
#include<iostream>
using namespace std;
class point{
    private:
    int x,y;
    public:
    point(int x=0,int y=0):x{x},y{y}{}
    void show()
    {
        cout<<x<<','<<y<<endl;
    }
    friend point operator+(point, point);
};
    point operator +(point t1,point t2)
    {
        return point (t1.x+t2.x+t1.y+t1.y);
    }

int main(){
    point p1(10,5);
    point p2(-9,16);
point r=p1+p2;
p1.show();
p2.show();
r.show();
return 0;
}
