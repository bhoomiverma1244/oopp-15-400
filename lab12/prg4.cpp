 //method chaining
 #include<iostream>
using namespace std;
class point{
    private:
    int x,y;
    public:
    point(int x=0,int y=0):x{x},y{y}{}
    friend ostream &operator<<(ostream &os,point t);

    point operator +(point t)
    {
        return point(x+t.x,y+t.y);
    }
};
 ostream &operator<<(ostream &os,point t)
{
    os<<t.x<<","<<t.y<<endl;
    return os;
}

int main(){
point p1(10,5);
point p2(-9,16);
point p3=p1+p2;
 cout<<p1<<p2<<p3;//method chaining we have to return this pointer
// cout<<p1;
// cout<<p2;
// cout<<p3;
return 0;
}