/*#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<a+b<<endl;
}*/
//class of a template
/*#include <iostream>
using namespace std;
template<class t>
class mat{
    public:
    t add (t a , t b){
        return a+b;
    }
    t mul (t a , t b){
        return a*b;
    }
};

int main(){
    mat<int> m;//create n object like thsi because its in template
    int a {a};
    int b {a};
    cin>>a>>b;
    cout<<m.add(a,b)<<'\n'<<m.mul(a,b)<<endl;

}*/
//template of a class
/*#include <iostream>
using namespace std;
class mat{
    public:
    template <typename t>
    auto add(t a , t b)->decltype(a){//trailing return type
        return (a+b);
    }
};
int main(){
    mat m;
    auto a{0.0},b{0.0};
    cin>>a>>b;
    cout<<m.add(a,b)<<endl;
}*/
/*#include <iostream>
#include <array>
using namespace std;
int main(){
    array <array<int,2>,2> a={{{1,0},{0,1}}};
 for(auto & row :a){
        for(int x:row){
            cout<<x<<endl;
        
    }
    cout<<endl;
}
}*/
/*#include <iostream>
using namespace std;
int main(){
    auto s = 43.4;
    void* p=&s;
    cout<<"\n"<<p<<endl;
    //cout<<*p<<endl;//it doesnt remember the type it can store the adress of any object

}*/
/*#include <iostream>
using namespace std;
class add{
    public:
     double a,b;//we have to write double a and b because here double a and b are data members that is the variable that is actually get stored inside the object wheere as in the constrcutor they are jsut paramter dont think like a fucntion here
    add(double a, double b):a(a),b(b){
        cout<<a+b<<endl;
    }
   // double a,b;
};
int main(){
    add f(2.3,43);
  


    //cout<<f.a<<endl;
}
*/
/*#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a={3,2,4,2};
    for(int x:a){
        cout<<x<<endl;
        
    }
     cout<<a.at(3)<<endl;
}*/
/*#include <iostream>
using namespace std;
void add(double a,double b, double c,double &s,double &p){
     s=a+b+c;
     p=a*b*c;
}
int main(){
    double a ,b,c,s,p;
    cin>>a>>b>>c;
    add(a,b,c,s,p);
    cout<<s<<"\n"<<p<<endl;

}*/

/*#include <iostream>
using namespace std;
double add(initializer_list<int> l){
    int s=0;
    for(int x:l){
      s+=x;
    }
      return s;
    
}
int main(){
    cout<<add({2,3,4,5,6,78})<<endl;
}*/
/*#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5};
    for (size_t i=0; i<v.size(); ++i){
        cout<<v[i]<<endl;
    }
}*/
/*#include<iostream>
using namespace std;
int main(){
   int a,b;
    cin>>a>>b;
    int x=10;
    auto z=[&x](int p,int q){return p+q+x;};
    cout<<z(a,b)<<endl;
}*/


/*#include<iostream>
using namespace std;
  int x=10;
auto z = [x](int a, int b){return a+b;};
int main(){
   
    int p,q;
    cin>>p>>q;
    cout<<z(p,q)<<endl;
}*/
/*#include<iostream>
using namespace std;
auto add(auto a, auto b){
    return a+b;
}
int main(){
    auto a{0.0};
    auto b{0.0};
    cin>>a>>b;
    auto s=add(a,b);
    cout<<s<<endl;
}*/
/*#include <iostream>
using namespace std;
int main(){
    int i=4;
    auto *p=&i;
    cout<<*p<<endl;
}*/
/*#include <iostream>
using namespace std;
inline int max(int a , int b){
    if(a !=b){
        return a;
        }else{
            return b;
        }
    }

int main(){
int a ,b;
cin>>a>>b;
cout<<max(a,b)<<endl;
}*/
/*a fucntion shoud return somethig be very carefull here */
/*#include <iostream>
using namespace std;
class add{
    public:
    add (double a , double b):a(a),b(b){
    cout<<a+b<<endl;
    }
    double a ,b;
};
int main(){
    add f(2,3);
    add g=f;
    cout<<f.a<<" "<<g.a<<endl;
}*/
/*#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    const int rows=3, cols=4;
    int m[rows][cols]={{2,3,4,5},{3,2,3,4},{3,4,2,1}};
    for(int r=0;r<rows;++r){
        for(int c=0;c<cols;++c){
            cout<<setw(4)<<m[r][c]<<endl;
        }
        cout<<'\n';
    }
}*/
/*#include <iostream>
#include <Eigen/Dense>
using namespace std;
int main(){
    Eigen::Matrix<int,3,4> A;
    A<<2,3,4,2 ,3,5,5,5,7,3,4,5;
    Eigen::Matrix<int ,4,3> B= A.transpose();
    Eigen::Matrix<int,3,3> S=A*B;
    cout<<S<<endl;
}*/
/*#include<iostream>
#include <Eigen/Dense>
using namespace std;
int main(){
    Eigen::Matrix3d A;
    A<<2,1,-1,-3,-1,2,-2,1,2;
    Eigen::Vector3d b;
    b<<8, 0,-3;
    Eigen::Vector3d x=A.partialPivLu().solve(b);
    cout<<A<<"\n\n";
    cout<<b<<"\n";
    cout<<x<<"\n\n";
    Eigen::Vector3d r=A*x-b;
    cout<<"residual"<<r<<"\n";
}*/
/*#include <iostream>
using namespace std;
template <class T>
T add(T a ,T b){
    return a+b;
}
int main(){
    int a ,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
}*/
/*#include<iostream>
using namespace std;
int main(){
    vector<int> v={2,3,4,5};
    for(int x:v)cout<<x<<endl;
   for(auto it=v.rbegin();it!=v.rend();++it){
    cout<<*it<<endl;
   }
}*/
/*#include <iostream>
using namespace std;
class learn{
    public:
    double add(double a , double b) const {
    return a+b;
}
};
int main(){
    double a ,b;
    cin>>a>>b;
    learn m;
    cout<<m.add(a,b)<<endl;
}*/
/*#include <iostream>
using namespace std;
class Calculator{
    double lastResult;
    public:
    Calculator(): lastResult(0.0) {}
    double getlastResult() const{
        return lastResult;
    }
    double add(double a, double b){
        lastResult = a+b;
        return lastResult;
    }
};
int main(){
    Calculator c;
    c.add(2.3,5.6);
    const Calculator cc=c;
    cout<<cc.getlastResult()<<"\n";
}*/

//we have to learn the const pointer and const qualified pointer from slide and learn how in the form of code it works
/*#include<iostream>
using namespace std;
int main(){
    int i=40;
     int  &&pp=i+40;
    cout<<pp<<endl;
}*/

/*#include <iostream>
#include <thread>
using namespace std;
void worker{
    for(int i=0;i<100;++i){
        cout<<i<<endl;
    }
};
int main(){
    thread t1(worker);
    thread t2(worker);
    t1.join();
    t2.join();
}*/
/*#include <iostream>
#include<print>
#include <string>

int  main(){
   std::string user = "alice" ;
   int id =42;
   std::println("");
   std::println(stderr, "Error:user {} not found.", user);
}*/
