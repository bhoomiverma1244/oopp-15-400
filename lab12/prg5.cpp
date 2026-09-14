//operator overloading
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
    //     point operator + (point p) {
     
    //     int a = x + p.x;
    //     int b = y + p.y;
    //       point q(a,b);
    //     return q;
    // }
    //or we can also
    point operator +(point t)
    {
        return point(x+t.x,
        y+t.y);
    }
};

int main(){
    point p1(5,6);
    point p2(10,11);
    point p1=++q;
    point p2=p++;
    cout<,p1<<p2;

return 0;
}
