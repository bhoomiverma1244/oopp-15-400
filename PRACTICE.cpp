#include<iostream>

using namespace std;
class point{
    private:
    int x,y;
    public:
    point():x{0},y{0}{
        // cout<<"default constructor"<<endl;
    }
    point(int p,int q):x{p},y{q}{
        p=0;
        q=0;
        cout<<"parametrized constructor"<<endl;
    }
    void show(){
    //{
       // x=y=0;
   // }

    cout<<x<<","<<y<<endl;
   }
   point add(point q){
    return point(x+q.x,y+q.y);//nameless object creation 
   }
//     point r;
//     r.x=x+q.x;
//     r.y=y+q.y;
//     return r;
//     //20,60
//    }
 };

int main()
{
    point p(5,10),q(20,50);
    p.show();
    q.show();
    // point r=p.add(q);
    r.show();
    return 0;
}


// #include<iostream>

// using namespace std;
// class point{
//     private:
//     int x,y;
//     public:
//     point():x{0},y{0}{
//         cout<<"default constructor"<<endl;
//     }
//     point(int p,int q):x{p},y{q}{
//         cout<<"parametrized constructor"<<endl;
//     }
//     void show(){
    

//     cout<<x<<","<<y<<endl;
//    }
//    void add(point p,point q){
//    x=q.x+p.x;
//    y=p.y+q.y;
//    }
// };

// int main()
// {
//     point p(5,10),q(20,50);
//     p.show();
//     q.show();
//     point r=p.add(Q);
//     r.add(p,q);
//     r.show();

// }
