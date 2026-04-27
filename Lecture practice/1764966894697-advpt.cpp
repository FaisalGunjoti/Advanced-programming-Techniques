//this is a practice codes for the lecture Advanced pograming techniques 
//and I am Mohammed Faisal who has done this practice 
//Generic code is the code which is written once that works for many types or situations, not just one.
/*#include<iostream>//this is the preprocessor directory that tells the compiler to include the standard I/O header//
using namespace std ; //using this pulls every name from the C++standard library std namesapce into the current scope
int main(){
int a , b ;
cin>>a >>b;
cout<<a+b<<endl;
return 0;
}*/
//loops: repeat some code multiple times instead of copy pasting
/*#include<iostream>
using namespace std ;
int main(){
    int a ,b ;
    cin>>a>>b;
    if(a==b){//if can have multiple considtion using && || operators
    cout<< "they are same number"<<endl;
    }else{//else has no condition instead we have else if
    cout<< "they are not the same number"<<endl;
    }
    return 0;
}*/

//important loops
//for loops
/*#include<iostream>
using namespace std ;
int main(){
    for(double i=0; i<5; ++i){
        cout<< sqrt(i)<<'\n';
    }
    return 0 ;
}*/
//range based for
/*#include<iostream>
using namespace std ;
int main(){
    int x=3 ;
    while (x>0){
        cout <<x<<"";
        --x;
    }
    return 0;
    }*/
//do while loops
/*#include <iostream> in this code what wrong i was doing is is to pair the else with while statement whcih cant be done because else statement can be paired only with if or if else.
using namespace std ;
int main(){
    double x;
    cin>>x>>;
    while(x==sqrt(x)){
        do {
            cout<<"i am doing square" x*x<<endl;
            else{
                return 0;
            }
        }
    }
}*/
//do while loop, do must be paired with while where as while can standalone
/*#include<iostream>
using namespace std ;
int main(){
  double a ;
    cin>> a; //cin>>a>>; this is a wrong syntax because this this trying to take another value as well
    while (a>45){
        cout<<a--<<'\n';
    }
}*/

//break and continue
// break immeadeately exist the nearest loop , stopping early 
//continue skips the rest of the current iteration
/*#include<iostream>
using namespace std ;
int main(){
    for(int i=0; i<10; i++){
        if (i==3)continue; //skip 3
        if(i==7)break; //stop at 7
        cout<<i<<'\n';
    }

}*/

//nested loops are loops inside other loops
/*#include<iostream>
using namespace std ;
int main(){
    for (int i=1 ;i<=3 ;++i){
        for(int j=1; j<=3 ; ++j){
            cout<< i * j <<"";
        }
        cout<<"\n";
    }
}*/

//python is the indentation language that means living spaces does matter
/*# incorrect (IndentationError)
x = 3
if x > 0:
print("positive")   #  not indented under the if*/

/*# correct
x = 3
if x > 0:
    print("positive")    # indented ⇒ inside the if
    x -= 1               # also inside the if
print("done")            # not indented ⇒ outside the if*/

//to understand what actually is cout,cerr,and clog
//the concept of buffer is that its a small waiting room in memory where printed text sits temporarrily before being sent to the screen or a file //
//flush is that send everything to the waiting room right now. empty the buffer immeadeately. so flush and endl have the same thing whereas as endl =newline\n+flush

/*#include<iostream>
using namespace std ;
int main(){
    cout<<"this is used for programs normal output"<<flush<<endl;//here we are doing double flushes since endl aso does the same but with the above differences
    cerr<<"this is used for error message that should appear right away"<<endl;
    clog<<"this is used for log/info message that can appear a bit later "<<endl;
    return 0;//the concept of return 0 and 1 is that 0 if the program succed 1 if the program failed or singnal an error
}*/

//some imporatant operator like ++,+=,= etc

/*#include <iostream>
using namespace std;

int main() {
    for (int i = 10; i > 5; i--) {
      cout << i;   // no newline/space
    }//look the diffference of putting the curly braces here is that the code runs in a loop and gives us the print 1234
    return 0;
//}where as if we put the curly braces here the code just give 1 and aborts before iterating the loop
}*/
//some  opertors
//< the less than opertor,
//== equality operator
//!= the inequality operator
//++:i++ is same as i=i+1
//+= opertor is a+=b is same as a=a+b
//also observe the difference between = and == operator

//for if else statement 
//for statement to repeat a calculation a fixed number of times//
//if ; if the condition is true the body is excuted ,if not control flow to the statement following the else
//

//basic if else statement also observe the syntax and brackets same true for the while for and other loops
/*#include<iostream>
using namespace std;
int main(){
    int x; cin>>x;
    if(x%2==0){
     cout<<"even\n";
    }
    else{
        cout<<"odd\n";

    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    double a,b,x,c;
    cin>>a>>b>>x>>c;
    if (a==b){
        cout<<"this we are going to do quadratic formula"<<a*x*x+b*x+c<<endl;

    }
    else if(a!=b){
        cout<<"this we are going to divide"<<a/b<<endl;
    }
    return 0;
}*/
//finding the roots of the quadratic equation using shridharacharyaas formnula

/*#include<iostream>
#inlclude<cmath>
using namespace std;
int main(){
    double a,b,c,x;
    cin>>a>>b>>c>>x;
    cout<<"for the quadratic equation ax^2+bx+c we have the first root is"<<((-b+sqrt(b*b-4*a*c)))/(2*a)<<endl;
    cout<<"for the quadratic equation ax^2+bx+c we have the second root is"<<((-b-sqrt(b*b-4*a*c)))/(2*a)<<endl;
}*/

//let us learn how to define a fucntion and access it throw the main function
/* #include<iostream>
 using namespace std;

 int add(int a ,int b){
    return a+b;
 }
 int main (){
    int a ,b;
    cin>>a>>b;
    int s=add(a,b);
    cout<<s<<"\n";

 }*/


 //Literals are the fixed values you write directly in code—not variables, not expressions. They’re the raw constants the compiler sees.

//some definitions
//objects is a chunk of memory thgat holds a value and has a type
//int age=42; an object of type int named age
//type of variable int ,double ,char, bool , string, auto(let the compiler figure it out and the type of auto=type of initialiser)
/*#include <iostream>
using namespace std;
int main(){
    auto a =0.0,b=0.0;//in auto the way we initiale the varible the auto becomes that type so in this case we initualise with a double so we can get the result in the double so try also checking with initualisation with only 0 rather than 0.0
    cin>>a>>b;
    auto c = a+b;
    cout<<c<<endl;
}*/

//here we will learn about the scope :A local variable with the same name as a global hides (shadows) the global inside that local scope.
 /*#include<iostream>
 using namespace std;
 string s1="hello";//initially the program doent print the hello as it is global and shadowed by the local but we can access the global by :: operator as in the below cout
  int main(){
string s2="world";
int s1=10;
cout<<s1<<s2<<::s1<<endl;
 }*/

//now lets discuss about the scope: A scope is a prograkm in which names have meaning,several level of scope are 
//global, class , namespace local, block, statement,copes nest,:

//lets now discuss about the pointers:a pointer is a varible that stores the address of an object
/*#include <iostream>
using namespace std;
int main(){
auto a=0 ;
    a=2;
    cout<<&a<<endl;//&opertor gives the memory adress where a=2 is stored in the memory
}*/
//how to creat a pointer
//simple syntax is int*p=&i; this means p is a pointer to integer and is pointing to the adress of i
/*#include <iostream>
using namespace std ;
int main(){
    auto i=0.0;//if we doesnt initialise correclt with what data type we are using the compiler does implicit conversion 
    i=42.4;
    auto *p=&i;
    cout<<p<<endl;//this gives the adress of 42.4
     cout<<p+1<<endl;//this gives the adress of the next 
     cout<<*p<<endl;//this gives the number 42.2 this is also called as dereferecing
}*/
//void* = pointer to some thing but we dont say what type i,e we dont know what type(int double)it is
//we can store pass dcompass void* but cannot do dereference or do pointer arithmetic
/*#include <iostream>
using namespace std;
int main(){
    auto a =40;
    auto b=60.6;
    void*p=&a;
    void*q=&b;
    cout<<p<<endl;
    cout<<q<<endl;
    }*/

// dynamic memory allocation
//the stack and heeap memory ; the stack memory is small and by default it dont say the compiler,it takes on stack memory, whereas the heap memeory is big but to work on heap emmory we need to do it through different syntax below are those things
//int i=10 ; it starts with stack memory and goes 
// int *p=new int; this is the synatx for heap memory
// int *p=new int[];delete[]p;
//the syntax says that the pointer leaves in satck and is pointing to the whatever we want to point in the heap
//dont forget to deleting the heap memory that we use and to return to the system if not deleted causes memory leak

/*#include <iostream>
using namespace std;
int main(){
    auto*p=new auto(0.0);//that is we assignmed the integer on heap memory//look we can also use the auto here but remember to initialise the auto
    *p=10.4;
    cout<<*p<<endl;
    delete p;//this is how we delete 
    p=nullptr;
}*/
//typedef is a concept we can define a short type for the existing large type
//example of typedef is: typedef unsigned long long U64; this means instead of using that all now we can use U64 for that
/*#include<iostream>
using namespace std;
int main(){
    typedef int I;
     I a=45;
     I b=65;
    cout<<a+b<<endl;
}*/
//we can also use it like this in modern cpp
/*#include <iostream>
using namespace std;
int main(){
   using i=int;
    i a =10;
    i b=10;
    cout<<a+b<<endl;

}*/

//Inline functions
/*#include <iostream>
using namespace std;
using i=int;
inline i max(i a ,i b){
    return(a>b)?a:b;//if a>b return a otherwise return b
}
i main(){
    i a,b;
    cin>>a>>b;
    i c=max(a,b);
    cout<<c<<endl;
}*/
//here we will learn what is lvalue, xvalue, prvalue , glvalue, rvalue
//lvalue
//so lets now move to object oriented programming(OOPS)
//class is a blueprint that defines the properties and fucntions of the specific object and  class is our own custom data type that can bundle member fucnton
//member function are functions that operates on that data type or a function that belongs to the class
//object is a real concreate thing made form a class 
//lets assume student as a class and student1,student2 are the objects
//syntax for creating a class
// class student{ };
/*#include <iostream>
#include <string>
using namespace std;
using i=int;
using p=string;
 class student{
    public:
    i roll ;
   p name;
 };
 i main(){
    student s1;
    student s2;
    student s3;
    s1.roll=24;
    s1.name= "good";//similarly we can also do it for s2,s3 
    cout<<s1.roll<<endl;
    cout<<s1.name<<endl;
    }*/

//what is public private and protected and why is it by default private and a difference betweeen struct and class
//public : acessible from anywhere(outside code,other classes,fucntion)
//private: accessible only inside the same class(its own member fucntions/friends)
//protected: accessible inside the same classs and in derived (child ) classes but not from outside code
/*#include <iostream>
using namespace std;
class student{
    public://observe here we dont have a ; where as we have :
    int roll;
    string name;
    private:
    string gender;
    protected:
    string engaged;

};//remember class has to end with a semicolon;
int main(){
    student s1;
    student s2;
    s1.roll=10;
    s1.gender="male";//since gender is private member we cant access it through here direcclt//
    s1.name="abc";
    s1.engaged="no";//since engaged is private member we cant access it through here direcclt//
    cout<<s1.roll<<s1.gender<<s1.name<<s1.engaged<<endl;
}*///so to get or access those things we need setters and getters

//what are setters and getters
//setters:writes/updates a private value
//getters: reads a private value and return it
//so we have to write this setters and getters in the public fucntions in the class
//sytax for setter and getter in class
/* class student{
    private:
    int age;
    public:
    void display(){}
    int getAge(){
        return age;
    }
        void setAge(inta){
            age=a;
        }
        }

}*/
//this example shows how to use setters and getters 
/*#include <iostream>
using namespace std;
class student{
     private:
     int age;
    string gender;
    string engaged;
    public://observe here we dont have a ; where as we have :
    int roll;
    string name;
    void setAge(int a){age=a;}
    void setGender(string g){gender=g;}
    void setEngaged(string e){engaged=e;}
    int getAge(){return age;}
    string getGender(){return gender;}
    string getEngaged(){return engaged;}

};//remember class has to end with a semicolon;
int main(){
    student s1;
    student s2;
    s1.roll=10;
    s1.name="abc";
    s1.setAge(20);
    s1.setGender("female");
    s1.setEngaged("yes");
    cout<<s1.getAge()<<""<<s1.getGender()<<""<<s1.getEngaged()<<endl;
    }*/

    
//Constructors : special member function that is used to "initialise" newly created object,its job to see that data members have a safe "initial values"
//when we create an class(object) the constrcutor is already created by compiler for us by default
//Example for understanding a constructor,/
//There are types of constructor such as default(simple), parameterised
//default constructor has the same name as class ,No return type and no input arguments
//syntax for simple constrctor student(){}
/*#include <iostream>
using namespace std;
class student{
      public://waise to by default yaha pe constructor compiler de dega par hamko seekhna hai ke kaise banana hai apna own
      student():roll(0),name("unknown"){
         cout<<"our own constructor is called"<<endl;//observe also to where to write cout in the constructor
      }//dont forget to initialise
      
      int roll;
      string name;
};
int main(){
    student s1;
    s1.roll=40;
    s1.name="abc";
    cout<<s1.name<<s1.roll<<endl;
}*/

//now lets learn the parameterised constructor :the construtor in whcih we pass parameters
/*#include<iostream>
using namespace std;
class student{
    public:
    student(int r, const string& n):roll(r),name(n){//herr we are passing string by reference to avoid copying the character when we only need to read them
        cout<<"paramterised constructor is called"<<endl;
    }
int roll;
string name;
};
int main(){
    student a(20,"abc");
    student b(34,"cvc");
    cout<<a.name<<b.roll<<endl;
}*/
//maths example to compute the distance between to points
/*#include <iostream>
#include <cmath>
class distance {
public:
    distance(double a, double b) : a(a), b(b) {
        std::cout << "i am using parametrised constructor to compute my distance "
                  << std::sqrt(double(a)*a + double(b)*b) << '\n';
    }
    double a, b;
};

int main() {
    distance f(2.56, 3.44);
    distance g=f;//here the compiler itself synthesis the copy constructor,it is copy constructor because we are creating a new object g
    std::cout << f.a << " " << g.a << '\n';
}*/

//some notable points
//in c++ struct and class are the same thing except for defaults
//for class the members are private by default whereas for struct the members are public by default
//copy constrcutor: Constructor that initialises a new object as a copy of another object of the same type
//Assignment Operator: The assignment operator can be overloaded to define what it means to assign one object of a class type to another of the same type,the asignmen operator must be a member if its calss and should return a "reference" to its object
//destructor: A special member fucntion that cleans up an object when the objct goes out of scope or is deleted ,the compiler automatically destroyes each member
//operator overload

//lecture 5-smart pointer
//ARRAY: Data strcuture that holds a collection of unnamed objects that can be accessed by an index
/*#include <iostream>
using namespace std;
int main(){
    int a[4]={3,0,5,4};//this is how we create an array
    cout<<a[3]<<endl;//to access that 
    int sum=0;
    for(int i=0;i<3;++i){
        cout<<a[i]<<endl;
        sum+=a[i];
    }
    cout<<sum<<endl;
}*/
//here we will create a simple two d arrary
/*#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    const int rows=3 , cols=4;
    int m[rows][cols]={{2,4,5,4},{3,4,5,6},{2,3,4,5}};//Remember in the matrix the numbering starts from zero just observe this line
    for(int r=0;r<rows;++r){//this for loops are used to print the matrix form
        for(int c=0;c<cols;++c){
    
        cout<<setw(4)<<m[r][c]<<' ';//setw(is the filed width)
    }
    cout<<'\n';

    }
} */
//here we will use eigen a c++ library for matrix related operation for performing addition subtratcion and multiplication
//here is a simple example using Eigen Library whcih is very helpful for all those mathematcial matrix implemetation
/*#include <iostream>
#include <Eigen/Dense>
int main() {
    Eigen::Matrix<int,3,4> A;//<scalar,row,colums>name of the matrix
    A << 2,4,5,4, 3,4,5,6,2,3,4,5;
    Eigen::Matrix<int,4,3> B = A.transpose();
    Eigen::Matrix<int,3,3> S = A * B;
    std::cout << "A * B =\n" << S << "\n";
}*/
//how to create an array dynamically

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int * a= new int[n]{};//allocates dynamic array on heap {} is for zero initialisation
delete[] a;//we have to delete it explicitly inorder to avoid memory leaks,here we can see a demo of it by just commenting this line out and using macos leak tool
//here a is pointer to the first element in a dynamically allocated array and the braket[] are essential it indicates to the compiler that the pointer points at an "array",not a single object
}*/
//a heap buffer overflow is writing past the end of a dynamically allocated block
//operators []:a subscript operator takes two operands :a pointer to an element of an array and an index
//its simple that through this we can return the ith elment of an array/pointer
//we can do ++ on a pointer and move to the next pointer
/*#include <iostream>
using namespace std;
int main(){
    int a[4]={1,2,3,5};
    cout<<a[2]<<endl;//throgh this we can get the ith elemnent of an array
    int *p= a;
    cout<<*p<<'\n'<<endl;//here we read the current elemnt ,this doenst move the pointer       
    cout<<*(p+1)<<endl;//here we look ahead without moving that is it bring me +1th element 
    cout<<*p++<<'\n'<<endl;//prints the current element and advance p to the next
    cout<<*++p<<endl;//move first the read
    cout<<*p<<endl;
}*/
//basicaly in the loose sense *(p+1) give me the value and *p++ gives me the position but this is in loose sense to understand the things
//manually deleteing is easy to mess up
//1) forget deleting will create memory leakage
//2) if we delete and then we read i,e reading the freed memory is an undefined behaviou
//3) if we double delete the same adress twice (here we can use smart pointer)
//writing this and deleting manually is risk prone and initialisation should also be kept in mind its better to use vector<int>a(n); so that memory is managed for us
//about vectors
//how to create a vector:
// std::vector<int>a; empty
// std::vector<int>b(5); size 5 all zrero
/*#include<iostream>
#include <vector>// including vector is important
using namespace std;
int main(){
    vector<int>v={2,3,4};//here we created a vector and printed its size
    cout<<v.size()<<endl;
}*/
//push back concept:put one more item at the end .vector grows automatically
/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={1,4,8};
    v.push_back(50);
    v.push_back(10);
    cout<<v.size()<<endl;
    cout<<v[1]<<endl;//here v[1] and v.at() gives the same output i,e what is the elemnt at that position
    cout<<v.at(1)<<endl;
    for(size_t i=0; i<v.size();++i){//this for loop is most helpfull to print the vector maybe we can just remember this
    cout<<v[i]<<(i+1==v.size()? '\n': ' ');
}
}*/
//we can also remember this logic for printing the array i,e : for(int x: v) std::cout<<x<<
/*#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v={2,3,5,6};
    v.resize(10);//this just resise the vector and put zeros in the new int
    v.reserve(50);//this just reserves the capacity
    v.insert(v.begin()+1, 10);//this will insert the element v.begin() is an iterator from the starting
    v.erase(v.begin()+2);//simialry this will erase form the begining+2 position
    cout<<v.capacity()<<endl;//this gives me 50
    //v.clear();//it removes the elements form the vector
    for(int x:v) //just remember this very helpful its simply saying take each element x form v and print it followed by a
    cout<<x<<" ";
      v.clear();//it removes the elements form the vector understan the difference between the above and this
}*/
//above were few example where we use vector to let c++ manage for us the creaton and deletion of array on the heap memory
//overall the lecture 5 says that: overall is this slide trying to say that we create the array on the heap memory since we have to manage it by our own its risky and we use vectors for that management and we can also create our own delete new operators in the class as to get more control ,here if we do manually we have to remember the rule of three/five
//the rule is that if we write this manully we also have to write its destructor,copy constuctir,copy assignment,move constructo,move assignment
//smart pointer:unique and shared pointer
//unique pointer: a smart pointer with "one owner",when the uinique pointer goes out of scope it deletes the object. we cant copy it it only move it
//shared pointer: a smart pointer with "many owners"
//unique pointer
/*#include <iostream>
#include <memory>
using namespace std;
int main(){
    auto p= make_unique<int>(42);//here this pointer holds the adress of this 42
    cout<<*p<<endl;
    cout<<p.get()<<endl;//look both p and q give the same adress
    unique_ptr<int>q=std::move(p);//here we trasfer the ownership of p to q
    //cout<<(p?" ":" ")<<endl;
    //cout<<(q?" ":" ");
    //unique_ptr<int> q=p;//this is to trying to copy here compiler throughs an error this cna be done with shared pointer
    cout<<*q<<endl;
    cout<<p.get()<<endl;//this gives me a nullptr because we moved it to q
    cout<<q.get()<<endl;
}*/
//shared pointer
/*#include <iostream>
#include <memory>
using namespace std;
int main(){
    auto p=make_shared<int>(99);
    auto q=p;
    //p.reset();
    q.reset();
    cout<<*q<<'\n'<<*p<<endl;
}*/
//in summary shared ptr is many owner of the same objects last one deletes it, unique ptr single owner of the object can trasnfer ownership via move, weak ptr no ownership of the object,just a watcher that can be upgraded temporarily with lock()

//lecture 6: Functions
/*#include <iostream>
using namespace std;
int add(int a,int b){//a,b are parameters 
    return a*a+b*b;
}
int main(){
    int a ,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;//here this paramthesis () is the call operetor//here a and b are  arguments thats what the slide is meant to say
}*/
//lamda functor concepts are still remaining
//header and Tu file concept we already seen in the excercise class practice but also to remember
//header are declaration not definitions i,e to say:
//basically taking the exmaple of the above code we form a simpel file sto understand what can be put in whcih file
//we will basically create 3 files .hpp where we declare the things here we write int add(int , int) here in where we also write #pragma once
//then we create a math.cpp file in which we write the function(definition)and in the main.cpp we  can call 
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long sum=0,x{};//initialiation is important otherwise compiler throw warning
    for(int i=0;i<n;++i){
        cin>>x;
        sum+=x;
    }
        cout<<"the whole sum is:"<<sum<<endl;

    }*/

//C++ is statically typed means types are known and checked at compile time, before our program runs
//every time we call a function it gets fresh lcoal variables for its paramters . after the fucntion returns , those vanish
//non reference parameters(pass by value):the fucntion gets its own copy,changeing the parametr does not change the callers varibles
//Reference parameters(pass by reference):the paramter becomes another name for the callers variable.changeing it does chnage the callers variable
//this tiny math example shows Non reference paramters i,e passing by values
/*#include<iostream>
using namespace std;
double quadratic(double *a, double *b, double *c,double *x){//to make this pointer paramter we just add here double*a and 
    return (*a)*(*x)*(*x)+(*b)*(*x)+(*c);//here also we have to make *
}
int main(){
    double a,b,c,x;
    cin>>a>>b>>c>>x;
    double y= quadratic(&a,&b,&c,&x);//pass adress because the fucntion expects pointers
    cout<<y<<endl;
}*/
/*#include <iostream>
using namespace std;
double add(const double &a ,const double &b){
     return a+b;
}
int main(){
    double a ,b;
    cin>>a>>b;
    double y= add(a,b);
    cout<<y<<endl;
}*/
//tiny example to understandl the things out by value and by reference 
//by non referenve i,e by value
/*#include <iostream>
using namespace std;
void scale(double &x , double k){
    x*=k;
}
int main(){
    double x=3.0;
    scale(x,2.0);
    cout<<x<<endl;
}*/
//small example to understand void fucntions
/*#include <iostream>
using namespace std;
void adpr(double a, double b,double& s, double& p){//here s and p are need to be written back to the caller and hence need alias whereas a and b doesnt need because it is just read
    s = a+b;
    p=a*b;
}
int main(){
    double a{},b{},s{},p{};
    cin>>a>>b;
    adpr(a,b,s,p);
    cout<<s<<'\n'<<p<<endl;
}*/
//initialiser list parameter lets us write f({a,b,c}) and handle those values easily and safely inside f
//Elements are const inside the list we can read not modify
/*#include <iostream>
using namespace std;
int sum (initializer_list<int> il){
    int s =0;
    for(int x:il)s+=x;
    return s;
}
double mean(initializer_list<double>il){
    double s=0; size_t n=0;
    for(double x:il){s+=x;++n;}
    return n? s/n:0.0;

}
int main(){
    cout<<sum({1,3,4,2,1,23,4})<<'\n';
    cout<<mean({1.4,3.5,3,3})<<endl;
    }*/

 // int x=5; x is the name bound to that int object
 //inline function
 //inline function should be defined in header files
 /* #include<iostream>
 using namespace std;
 inline int add(int a,int b){
    return a+b;
 }   
 int main(){
    int a ,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
 }*/
 //class member function: is a fucntion thats declared inside a classs and operates on that class it can access the class private/protected data
 //here i leave some space to understand the this pointer

 //overload functions:main fucntion cannnot be overloaded since a c++ program must have exactly one global main
 //this exmaple is lot to learn about the overload of the fucntion here the best thing to learn this out is try differnt things and get to know what the compiler says
 //the thing in thsi code is to understand that the compiler chooses the best fits depends on arguments we pass. if we pass two it call that add function which have that thing and if three it call that fucntion
//for exmaple if we create one double and one int add fucnton and we give int then int addd will be called 
//if the compiler cannot choose whcih fuction to choose based on the arguments as there is no match int long double and any of that doesnt match then the compiler throws error
/* #include <iostream>
 using namespace std;
 double add(double a,double b,double c){
    return a+b+c;
 }
 double add(double x, double y){
    return x+y;
 }
 int main(){
    double a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    double p= add(x,y);
    double q=add(a,b,c);
    cout<<q<<endl;
    
    cout<<p<<endl;
 }*/
//pointer to a functions: its a variable that stores the adress of the fucntion(with a specific parameter list and return typr)
/*#include <iostream>
using namespace std;
double add(double a, double b){return a+b;}
double sub(double a ,double b){return a-b;}
double mul(double a,double b){return a*b;}
double div(double a, double b){return b? a/b:0.0;}
using Op=double(*)(double,double);//op is a pointer to a function taking (double double) and returning double here (*) the parenthesis is important here
int main(){
    double a,b;
    cin>>a>>b;
    Op f=add;
    cout<<f(a,b)<<"\n";
    cout<<&f<<endl;
    f= sub;
    cout<<f(a,b)<<endl;
    cout<<&f<<endl;
    f=mul;
    cout<<f(a,b)<<endl;
    cout<<&f<<endl;
    f=div;
    cout<<f(a,b)<<endl;
    cout<<&f<<endl;
}*/
//paramteres can be declared as a fucntion pointer or as a fucntion type(double(double,double)) in paramters the function type decays to a pointer
/*#include <iostream>
using namespace std;
double add(double a, double b){return a+b;}
double mull(double a, double b){ return a*b;}
using Op =double(*)(double,double);
void apply_ptr(double x, double y, Op op){//cretae a void funtion like this and the remembering thing is gone
    cout<<"apply_ptr:"<< op(x,y)<<"\n";
}
void apply_fn(double x, double y, double op(double , double)){
    cout<<"apply_fn:"<<op(x,y)<<"\n";
}

int main(){
 double a,b;
 cin>>a>>b;
 apply_ptr(a,b,add);
 apply_fn(a,b,add);
 apply_fn(a,b,mull);
 apply_ptr(a,b,mull);
}*/
//basically when we observe the two codes its clear that instead of saying Op=add or something and doing the things out we create the function and move on without remembering the things
//a fucntion cannot return a fucntion but it can return a pointer to one below is the exmaple to understand
/*#include <iostream>
using namespace std;
double add(double a, double b){ return a+b;}
double mull(double a, double b){ return a*b;}
using Op= double(*)(double , double);
Op pick(char c){
    switch (c){
        case '+':return add;
        case '*':return mull;
        default:return nullptr;
    }
}
int main(){
    double a, b;
    cin>>a>>b;
    Op f=pick('+');
    if(f)cout<<f(a,b)<<"\n";
    f=pick('*');
    if(f) cout<<f(a,b)<<"\n";
}*/
//lamda expression is a tiny inline function
/*#include <iostream>
using namespace std;
int main(){
    double a ,b;
    cin>>a>>b;
    auto add =[](double a, double b){return a+b;};//this is the lamda expression
    cout<<add(a,b)<<endl;
}*/
//here is the difference template function
//fuction v/s template
/*#include <iostream>
using namespace std;
//int add(int a ,int b){return a+b;}
template<typename T>
auto add(T a ,T b){return a+b;}
int main(){
    double a,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
}*/
//Function: a finished recipe with fixed types-you write it once and it always takes the same kind of inputs
//Template :a blueprint that lets the compiler genrate the rght fucntion/class for whatever types you use at the call site
/*#include <iostream>
using namespace std;
template<typename T, typename F>
F add (T a, F b){return a+b;}
int main(){
    //double a,b;
    //cin>>a>>b;
    cout<<add(2.23,3)<<endl;//here T and F type are determine by the order of input type we give 
}*/
//the above example are function template
//class template: class definition used to define a set of type specific classes
/*#include <iostream>
using namespace std;
template<class T>//we can also use class
struct point{
    T x{},y{};
    T length(){return sqrt(x*x+y*y);}
};
int main(){
    point<int> p{3,4};
    point<double> d(2.34,3.456);
    cout<<p.length()<<endl;
    cout<<d.length()<<endl;
}*/
//A template paramter is a name for something(a type or number) that can change each time we use the template,the compiler fills it in and build a real verison automatically
//basically a template is also building a fucntion but at compile time
//instantiation: the compiler builds a real fucntion/class from a template by plugging in concrete template arguments
//Non type template paramters are values not types that we pass to a template,they must be compile time constants
/*#include <iostream>
using namespace std;
template<typename T , int N>
struct fixedarray{
    T data[N];
};
int main(){
    fixedarray<int,3>a{{1,2,3}};//creating array
    cout<<a.data[0]<<endl;
}*/
//till now from the above code we eventually did nto hardcode the return type but we fix the return type to be excatly as the arguments like T and F
//Now with the concept of trailing return type we dont hardcode return type this concept of trailing return type let us compute teh return type using the paramters we jsut declared
/*#include <stdio.h>
#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;
template<typename T>
auto first(T beg , T end )-> decltype(*beg){return *end;}
int main(){
    vector<int> v{10,20,30};
    list<string> s{"hello","there"};
    cout<<first(v.begin(), v.end())<<endl;
    cout<<first(s.begin(), s.end())<<endl;

}*/
//some functions need to forward one or more of their argumnets with their types unchanged to another fucntion hence perfect forwarding is to pass an argument excatly as we recived it to another fucntion preserving it lvalue ,rvalue, its const ,reference
/*#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
//passing lvalue
double l2norm(const vector<double>& x){//const vector<double>& x :safe for regular variables ; guarentees no mutation
    double s{};
    for(double v:x) s+=v*v;
    return sqrt(s);
}
//passing rvalue
double l2norm(vector<double>&& x){//vector<double>&& x: enables optimisation free to modify
    double s{};
    for(double v:x) s+=v*v;
    return sqrt(s);
}
template<class T>//this is a wrapper that will pass the argument as it comes
double norm_of(T&& vec){
    return l2norm(std::forward<T>(vec));//this is perfect forwarding
}
int main(){
    const vector<double>a{3,4,5};
    cout<<l2norm(a)<<'\n';
    cout<<norm_of(a)<<'\n';
    cout<<norm_of(vector<double>{3,4,5})<<'\n';
    vector<double>b{3,4,5};
    cout<<norm_of(b)<<'\n';
    cout<<l2norm(b)<<endl;
}*/
//variadic template lets a fucntion/class accept any number of arguments of "possibly different types".
/*#include<iostream>
#include <cmath>
using namespace std;
template<class... Ta>
auto norm(Ta... ba){//ta is type ba is the fucntion parameter
    return std::sqrt(((ba*ba)+...));//observe how its going the maths
}
int main(){
    cout<<norm(1,2.345,2,23,54)<<'\n';
    cout<<norm(3,4)<<'\n';
}*/
//Member template:a fucntion template that lives inside a class(the class itself may or may not be a template)
/*#include <iostream>
using namespace std;
struct logger{
    template<typename T>
    void log(const T& x ){cout<<x<<'\n';}
};
int main(){
logger l;
l.log(42);
l.log("hi");
}*/
//function template specialisation: firstly specialisation gives a custom version of a template for some specific types
//we use specialisation when a specific type or class template pattern truely needs a different implemmentation 
/*#include <iostream>
#include <cstring>
// primary (generic) function template
template<class T>
const T& my_max(const T& a, const T& b) {
    return (a < b) ? b : a;
}
// FULL specialization for const char*
template<>//for specialisation template 
const char* const& my_max<const char*>
(const char* const& a, const char* const& b) {
    return std::strcmp(a, b) < 0 ? b : a; // compare contents
}
int main() {
    std::cout << my_max(3, 7) << "\n";                 // 7  (generic)
    std::cout << my_max(2.5, 1.2) << "\n";             // 2.5 (generic)
    std::cout << my_max<const char*>("alice", "bob") << "\n";       // bob (specialized)
}*/
//partial specialisation we make a special verson of a class template for a pattern of types (we fix some template paramters ,not all)
//if its tie for whcih is a perfect template according to the paramter the compiler throws out all template candidates then rethink only the non template fucntions 1) if excatly one non template remains then its choosen 2)if zero or multiple remains->the call is ambiguous(compile error)
//type traits are tiny compile time facts/fucntions about types they let us ask question like is this an int or pointer or const etc
//type trait concept
/*#include <iostream>
#include <type_traits>
using namespace std;
template<class T>
requires std::is_integral_v<T>
T twice(T x){return x+x;}
int main(){
    cout<<twice(2)<<endl;
}*/
//concepts are compile time checks we attach to template to say "my fucntion only accepts types that meets these requirement". we write the requiremnt once (concept) and then use it ot constrain template and guide overload selection with clear error
/*#include<iostream>
#include<concepts>
using namespace std;
template<typename T>
requires(std::integral<T> || std::floating_point<T>)
T square(T x){return x*x;}
int main(){
    cout<<square(5)<<'\n';
    cout<<square(6)<<endl;
    //cout<<square("hi")<<endl;//throws compile error
}*/
/*#include <iostream>
using namespace std;
template<class T>
 double add(const T& a , const T& b){
    if ( a ==  b){
    cout<<"this are same number and i dont want to compute anything"<<'\n';
    return 0;
    }
    else{
        if(a!=b){
            cout<<"i will compute the addition"<<endl;
        }
   
    }
    auto s = a+b;
    return s;
}
int main(){
    double  a{},b{};
    cin>>a>>b;
    cout<<add(a,b)<<endl;
}*/
//standard c++ library: its like a ready made tools so that we dont have to rewrite the code for each and everything
//some main parts of it are 1)the i/o stream library(cout,ifstream) 2)Standard template library: generic containers,iterators,algorithms (vectors) 3)C library: the classic C header usable form C++(<cmath>)
//object oriented Library: is a set of class connected by inheritance:we can write the code for base type and then pass in any derived objects
//in the i/o library, the istream and ostream classes serve as base classes for the types defined in the fstream and sstream headers
//we can use an object of a derived class as if it were an object of the base class
//i/o library: using this we can read and write the input and output there are majorly istream iostream fstrean sstream that are derived from the base ios
//console stream<iostream> cin and cout we have seen in all the above exmaple
//file stream<fstream>: basically this is for files 1)ifstram:read file 2)ofstream:writes file 3)fstream:read and write files
//exmaple of file stream i,e fstream
/*#include <fstream>
#include<string>
#include<iostream>
using namespace std;
int main(){
    ofstream out("num.txt");//this opens/creates num.txt for writing 
    out<<"its there"<<" "<<20<<'\n';//this writes the character
    out.close();//flushes any remaining buffered data and releases the OS handle
    ifstream in("num.txt");
    int x,y;
    in>>x>>y;
    ifstream in("num.txt");//opens num.txt for reading
    //auto a{abc},b{};//declares two integres to holds what we read, remeber here using auto is illegeal because we cabt mix multiple declarators
    auto s{'a'};
    auto n{0};//here we cant deduce two different type of things using single auto the above commented auto will give me an error 
    cout<<s<<n<<'\n';
}*/

//Standard Template Library
//abstract data types are types whose representation is hidden. to use it,wee need to know only what operations the type supports
//container: A type whose objects holds a collection of object of a given type eg, vector ,list
//class template: A blueprint from which many potential class types can be created 
//Containers are box that stores many items of one type. All STL containers are templates, so we must say the elements type: vector<int>v like this 
//sequential containers : a container where elements have a defined order ad we access them by position
// Vectors or a flexible size array
//vector iterators v.begin() and v.end() we can play with it and iterate over the the vector write loops over it
//v.rbegin and v.rend is like going in the reverse order
/*#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{1,2,3,4};
    v.push_back(4);
    v.emplace_back(4);
    v.erase(v.begin()+2,v.begin()+6);
    v.insert(v.begin()+2,20);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    for(int x:v){
    cout<<x<<endl;
}
}*/
//initialisation of vector
//deque:double ended queue, we use deque if we need fast front/back insert/erase and random access, we use vector if we need contiguous memory or mostly push at the back, we use list if we constantly insert/erase in the middle
/*#include <iostream>
#include <list>
#include <forward_list>
#include<array>
#include <deque>
using namespace std;
int main(){
    deque<int> dq{2,3};
    list<int>ls{4,5};
    forward_list<int> fs{6,7};
    array<double,4>a{1,2,3,45};
    fs.push_front(3);
    ls.push_back(3);
    ls.push_front(3);
    dq.push_front(1);
    dq.push_back(4);
    for(int x:dq)//this gives me the cartesian product i,e all combination of one x in dq with that of y in ls
      for(int y:ls){
        cout<<'('<<x<<','<<y<<")\n" ;
    }
    for(int z:fs){
        cout<<z<<'\n';
    }
    for(int p:a){
        cout<<p<<endl;
    }
}*/
//list:its a chain of nodes each nodes points to the previous and next one
//forward list: unlike in the list where iterators are both directional forward as well as backward but in forward list the iterators are only forward i,e only push_front and also we use distance instead of size
//array:fixed size array it supports fast random access and cannot add or remove elements
//initialisation of container the slide discusses the various ways to do so they are mainly 1)As a copy of another container 2)as a copy of a range elemnts 3)allocating and initialising a specified number of elements(only sequential contaner)
/*#include<iostream>
#include<vector>
#include<ranges>
using namespace std;
int main(){
    vector<int> v={2,3,4,6,3,2};
    vector<int> z=v;//copy intialisation
    vector<int> c(v);
    for(auto[x,p,q]:std::views::zip(v,z,c)){//this is the c++23 thing that makes it easier to do the things as we dont have to write the full for loop again and again
        cout<<x<<'.'<<p<<'.'<<q<<'\n';
    }
    for(int x,p,q:v,z,c){//we cant iterate multiple containers but c++23 offers ranges lets use it and see
        cout<<x<<p<<q<<'\n';
    }
    for(int p:z){
        cout<<p<<'\n';
    }
    for(int q:c){cout<<q<<endl;}
}*/
//containers of containers:beautiful concept to understand is when each element of an outer container is itself another container ex: vector<vector<int>> the outer vector stores rows and each inner vector stores the columns of that row
//basically this concept was used in the HHO template
/*#include <iostream>
#include <vector>
#include <iomanip>
using Matrix = std::vector<std::vector<double>>;
int main() {
    std::size_t R = 3, C = 4;
    Matrix A(R, std::vector<double>(C, 0.0));
    A[1][2] = 7.0;

    Matrix B(R, std::vector<double>(C, 0.0));
    B[2][2] = 6.5;
    Matrix Cmat(R, std::vector<double>(C, 0.0));
    for (std::size_t i = 0; i < R; ++i)
        for (std::size_t j = 0; j < C; ++j)
            Cmat[i][j] = A[i][j] + B[i][j];
    for (std::size_t i = 0; i < R; ++i) {
        for (std::size_t j = 0; j < C; ++j)
            std::cout << std::setw(6) << std::fixed << std::setprecision(2)
                      << Cmat[i][j] << (j + 1 == C ? '\n' : ' ');
    }
}*/
//iterators are the special variable that lets you walk through the elemnts of a container
/*#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a{2,3,4,5,3,2};
    for(auto i=a.begin();i!=a.end();++i){//here we prefer != rather than < in the loop
    cout<<*i<<endl;//i points to the elements on the vector a
}
}*/
//invalidated iterator is an iterator that used to point to some elements but that elements no longer exists
//container defined typedef are just type names that the container itself provides for you to use,so basically instead of guessing the container itself tells us
//so for all the container that we discussed there are same typedef
//size type: unsigned integral type large enough to hold size of largest possible container of this container type
/*#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v={2,23,4,5,2,1};
    vector<int>::size_type n=v.size();
    for(vector<int>::size_type i=0;i<n;++i){//simply we can also use auto here and let compiler do for us
        cout<<v[i]<<endl;
    }
}*/
//the other iterators,const iterator,reverse iterator,reference,const reference
//the difference between push and emplace back operations are that in push we pass a ready made objects->container copies/moves it
//whereas in emplace we pass constructor arguments->Container constructs the object direclty in its storage
/*#include<iostream>
#include<vector>
#include <string>
using namespace std;
int main(){
    vector<std::string> a={"hii","26"};//look here we cant create a vector of two types we can create two types of same type
    a.push_back("is my age");
    a.emplace_back("i say ");
    for(auto x:a){
        cout<<x<<endl;
    }
}*/
//usually we do use push if we already have the object and if we are building the object right there we use emplace
/*#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct ex{
    public:
    string name;
    int age;
};
int main(){
    vector<ex> v;
    v.push_back(ex{"faisal",26});//it gives a ready made ex object
    v.emplace_back("faisal",26);//it gives constructoer argument
    for(const auto& x:v){
        cout<<x.name<<x.age<<endl;
    }
}*/
//to be able to compare two container they must be the same kind of container and hold the same type of elements
//assignment and swap
/*#include <iostream>
#include <vector>
#include <ranges>
using namespace std;
int main(){
    vector<int> a={1,2,3};
    vector<int> b={2,2,7,8};
    a=b;//this measn make 'a' a copy of b and the old a is lost/destroyed
    for(auto [x,y]:std::views::zip(b,a)){
        cout<<x<<'\n'<<y<<endl;
    }
}*/
//container adapter means it adapts an existing container to behave like another data structure here we dont see the underlying container
//stack:adaptor for the sequential containers that yields a type that lets us add and remove elements from one end only
/*#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> s;//last in first out
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.top()<<endl;
}*/
//queue:First in first out (FIFO)
//vector,dqeue,lsit are neither LIFO nor FIFO by themselves they are general containers
//priority queue; bigger number higher priority
//pair: type that holds twwo public data members named first and second it can be differenr also
/*#include<iostream>
#include<string>
using namespace std;
int main(){
    pair<int , string> p{20,"abcd"};
    cout<<p.first<<p.second<<endl;
}*/
//key:is just the label we use to look something up in an associative conatiner ex:phoe book in whcih Name:key and Phone number:Value
//Associative Containers(set,map,etc)store elements ordered by a key and let us efficiently look up valuies using that key instead of an index
//map:assocaiative container type that defines an associative array
//the differnece between map and pair is that pair holds two thing map can hold many things
/*#include <iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    map<string,int> a;
    a["Faisal"]=26;
    a["bob"]=24;
    a["alice"]=35;
    cout<<a["Faisal"]<<endl;
}*/
//set:Associative container that holds only keys
//multimap and multiset: we can have several values with the same key
//Generic Algorithm:in simple words a ready made fucntion that works with many containers and many types
//Also Generic Algorithm are reusable fucntions that work with any container through iterators ,not by calling container specicfic fucntions
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<string> s={"cat","cat","elephant","dogs"};
    sort(s.begin(),s.end());//sort arranges in the lexicographical order
    auto end_unique=unique(s.begin(),s.end());//walks through the vector and keeps only the unique copy
    s.erase(end_unique,s.end());
    for(auto x:s){
        cout<<x<<endl;
    }
}*/
//A predicate is just a test fucntion a fucntion that answers yes/no about its arguments or to compare two elements
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool is_even(int x){
    return x%2==0;
}
int main(){
    vector<int>v{1,2,3,4,5,67,8};
    int cnt=count_if(v.begin(),v.end(), is_even);
    cout<<cnt<<endl;
}*/
//so that all above for the algorithm library

//here we will take topics form excercise seminar 2B becaause those topics are more of a code and learning stuff as we do in lecture
//A contagious array is a region of memory holding N>=0 elements of some type T an array is identified by its statrting "(pointer ptr)
//the two ways to store the contagious array is thorugh array(N fixed at compile time) and vector(dynamic)
//Arrays as fucntion argumnets: we give a whole array to a fucntion so the function can work on all its elements
/*#include <iostream>
#include <vector>
using namespace std;
double sum(const vector<int>& a){
    double s{};
    for(int x:a){
        s+=x;
    }
    return s;
}
int main(){
    vector<int> b={2,3,4,5,6};
    cout<<sum(b)<<endl;//here we cant do a.sum() simply because vector doent have member function sum
    }
*/
//std::span is the safe way to pass an array or part of it into a fucntion
/*#include<iostream>
#include<vector>
#include <span>
using namespace std;
void double_all(std::span<double> b){
   
    for(double& x:b){
          x*=2;
}
}
int main(){
 double a[5]={2,3,4,5,3};
   double_all(a);
   for(int x:a){
    cout<<x<<endl;
   }
}*/
//since pair store two things a tuple stores more than 2 things together in one object

/*#include<iostream>
#include<tuple>
using namespace std;
tuple<double,double> compute_min_max(double a,double b,double c){// we can just remove tuple and add pair and everything remains same 
    double mn=min({a,b,c});
    double mx=max({a,b,c});
    return{mn,mx};

}
int main(){
   double a,b,c;
   cin>>a>>b>>c;
   //auto[mn,mx]=compute_min_max(a,b,c);
   auto result = compute_min_max(a,b,c);
   //cout<<mn<<'\n';
   //cout<<mx<<'\n';
   //cout<<compute_min_max(a,b,c)<<endl;//this returns a tuple and c++ does not know how to print a tuple with<< by default and hence we unzip as above and print but aslo we can use get<0>results like this as below
   cout<<get<0>(result)<<'\n';//or we can do it like this
   cout<<get<1>(result)<<endl;
   }*/
/*#include<iostream>
#include<random>
using namespace std;
int main(){
    random_device rd;//just to get the random number
     default_random_engine e(rd());
    cout<<e()<<endl;
}*/
//the chrono library: A flexible collection of types that track "time" with varying degree of precision to use this we have to include<chrono>
//clocks: devices that tell the current time
// time points : a momnet on that clock,now()
//durations: how long between two moments end-start
//everything here seems to be self explanatory
/*#include<iostream>
#include<chrono>
using namespace std;
template<class T>
double add( T a, T b){
    return a+b;
}
int main(){
    double a ,b;
    cin>>a>>b;
    auto start = std::chrono::system_clock::now();
    cout<<add(a,b)<<endl;
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<double>elapsed_seconds =end-start;
    cout<<elapsed_seconds.count()<<endl;
    //std::time_t end_time= std::chrono::system_clock::to_time_t(end);
   // std::cout<<"finished computation at"<<std::ctime(&end_time)<<"elapsed time:"<<elapsed_seconds.count()<<endl;
}*/
//for numrics related task its important to look to the documentation we will do the practice in another file as its much important for finite elements implementation
//other interesting library part as per lecture are : 1)function 2)source_location 3)optional 4)any
//https://en.cppreference.com/w/cpp
//function:a variable that can store something callable
/*#include<iostream>
#include<functional>
using namespace std;
double add(double a, double b){return a+b;}
int main(){
    double a,b;
    cin>>a>>b;
    function<double(double,double)> f=add;//syntax
    cout<<f(a,b)<<endl;
}*/
//source location: a type that knows where in the source code we are example a file name, fucntion name ,line number,column , we need this because its great for logging and debugging:

/*#include<iostream>
#include<source_location>
#include<chrono>
 auto start=std::chrono::system_clock::now();
using namespace std;

void log_msg(const string & msg, const std::source_location& loc=source_location::current())
{
    cout<<loc.file_name()<<loc.line()<<loc.function_name()<<msg<<endl;
} 
int main(){
    //auto start=std::chrono::system_clock::now();
    log_msg("hello");
    log_msg("all is good?");
    auto end=std::chrono::system_clock::now();
    std::chrono::duration<double>elapsed_second=end-start;
    cout<<elapsed_second.count()<<endl;
    }*/
//Optional: A box that may contain a value of type T , or be empty
//any: its like a magic box it can hold a value of nay type(one at a time) , at compile time you only knows "this is a box" and at run time you decide whats actually inside it

//lecture 10: inheritance and polymorphism
//the core concept of OBJECT oriented programming explains how objects relate through base and derived classes, how derived classes extend or redefine inherited members.
//OBJECT: An object is memory that holds data, lives for some amount of time, has a tyoe and can even contain other objects
/*#include<iostream>
using namespace std;
class points{//here we created the a class of points simply that the class is a blueprint/template
     public:
     int a;
     int b;
};
int main(){
    points P1;//here we are creating an object of points
    points P2;
    P1.a=10;
    P1.b=30;
    P2.a=15;
    P2.b=20;
    cout<<P1.a<<P1.b<<'\n'<<P2.a<<P2.b<<endl;
}*/
//Object oriented programming= the programming style where we build and connect objects instead of just using free functions
//polymorphism: literal meaning "many forms" tyoe specific behavior based on the dynamic type: same fucntion name different real behaviour depending on the actual object type.
//dynamic binding is the concept in whcih we delay untill run time the selsction of whcih fucntion to run
/*#include<iostream>
using namespace std;
class add{
    public:
    int a;
    int b;
    void print_sum() const{// remember we cant directly print the using cout or return in the class we have to create a ducntion whcih woiudl do that for uss
    cout<<a+b<<endl;
}
    int sum() const{// just create a fucntion to do that work
        return a+b;
    }

};
int main(){
  add x;
  x.a=20; x.b=30;
  //x.print_sum();
  int s=x.sum();
  cout<<s<<endl;
  return 0;
}*/
//Inheritance: one class reuses and extends another class. in simple words child class gets("inherits") the data and fucntions of the parent class("base class")
//base class: a class that is parent of another class. the base class defines the interface that a derived class inherits
//Derived Class(Child class): A derived class is one that shares an interface with its parent class
//simply Inheritance means a derived(child class) reuses and extends a base(parent) class, so they share the same basic interface (same function)
//a math example to understadn is that we have a different fucntions like linear quadratic cubic here function is a parent class(remember the word class) and the linear quadratic cubic is the derived class i,e is the child class below is the code to understadn this
// the thing is linear quadratic are special kinds of functions that share the same interface eval(x) but use different formulas inside
/*#include<iostream>
using namespace std;
class Function{
    protected:
    double eval(double x)const{
        return 0.0;
    }
};
class linear: public Function{
    public:
    double a,b;
    double eval(double x) const{
        return a*x+b;
    }
};
class quadratic: public Function{
    public:
    double a,b,c;
    double eval(double x)const{
        return a*x*x+b*x+c;
    }
} ;
int main(){
    double x;
    cin>>x;
    linear l;
    l.a=2;l.b=3;
    quadratic q;
    q.a=2;q.b=3;q.c=4;
    cout<<l.eval(x)<<'\n'<<q.eval(x)<<endl;
    //cout<<l.Function::eval(x)<<endl;//to acces the fucnton eval we have to use scope resolution operator
}*/
//Derived class can redefine the member of its base and can define new members:here the base class is fucntion the derived classs linear quadratic are redefining the base class
//A derived class scope is nested in the scope of its base class so the derived class can access members of the base class directly
//Members defined in the derived with the same name as members in the base hide those base members that why we use linear l and then l.a like that
//Members after protected: can be used by the class itself,its friends,and any derived class but not by normal outside code
//for struct: by default is public
//for class: by default is private
//only the immediate base can be initialised in the constructor i,e is to say in the above exmaple of ours the functuon class which is the base class can be initialised .
//public inheritance: The public interface of the base class is part of the publiuc interface of the derived class
//Private inheritance: A form of implementation inheritance in which the public and protetcted members of a private base class are private in the derived
//protected Inheritance: in protected inheritance the protected and public members of the base class are protected in the derived class
//when we assign a derived object to base object c++ cuts off the extra derived part and keeps only the base part
/*#include<iostream>
using namespace std;
class base{
    public:
    int x;
};
class derived:public base{
    public:
    int y;
};
int main(){
    derived d;
    d.x=10;
    d.y=20;
    base b;
    b=d;//C++ treats d as Base&(reference to base) "look only at te base part inside d"
    cout<<b.x<<'\n'<<d.x<<'\n'<<d.y<<'\n'<<endl;
} */
//if a derived class explicitly deines its own copy constructor or assignment operator, that defnition completely overrides the defaults
//therefore copy constructr and assignment operator for inherited classes are responsible for copying and assighning alsi thier basee class members
// The copy Constructor cannot and the assignment opertor should not be define as Virtual
//virtual Fucntions: a function in a base class that children can change and C++ will pick the right version at run time when we use a base pointer/reference
/*#include <iostream>
using namespace std;

class Function {
public:
    virtual double eval(double x) const {
        return 0.0;
    }
    virtual ~Function() = default;//~Function() this is the destructor of the class Function
};

class Linear : public Function {
public:
    double a, b;
    Linear(double a, double b) : a(a), b(b) {}
    double eval(double x) const override {
        return a * x + b;
    }
};

class Quadratic : public Function {
public:
    double a, b, c;
    Quadratic(double a, double b, double c) : a(a), b(b), c(c) {}
    double eval(double x) const override {
        return a * x * x + b * x + c;
    }
};

int main() {
    Linear f1(2.0, 3.0);
    Quadratic f2(1.0, 3.3, 4.4);

    Function* pf1 = &f1;
    Function* pf2 = &f2;

    double x = 2.0;
    cout << pf1->eval(x) << '\n';  
    cout << pf2->eval(x) << endl;  

    return 0;
}*/
/*#include <iostream>
#include <vector>
#include <memory>   
using namespace std;

class Animal {
public:
    void eat() const {          //here its not virtual overriding becuse we did not write virtual here         
        cout << "Eating...\n";
    }
    virtual void speak() const = 0;
    virtual ~Animal() = default;
};

class Dog : public Animal {
public:
    void speak() const override {
        cout << "Woof!\n";
    }
};

class Cat : public Animal {
public:
    void speak() const override {//this overrides the base eat
        cout << "Meow!\n";
    }
};

int main() {
   
    Dog d;
    Cat c;

    Animal* a1 = &d;
    Animal* a2 = &c;

    cout << "Single animals:\n";
    a1->eat();
    a1->speak();   

    a2->eat();
    a2->speak();   

    cout << "\nVector of Animal*:\n";

    vector<Animal*> animals;
    animals.push_back(&d);
    animals.push_back(&c);

    for (Animal* a : animals) {
        a->eat();   
        a->speak();  
    }
    cout << "\nUsing smart pointers:\n";
    vector<unique_ptr<Animal>> zoo;
    zoo.push_back(make_unique<Dog>());
    zoo.push_back(make_unique<Cat>());

    for (const auto& a : zoo) {
        a->eat();
        a->speak();
    }
    return 0;
}*/
//Static type: the type we wrote in the declaration
//Dynamic type :The real concrete type of the object at run time
//Pure virtual fucntion ends with =0 measn the fucntion has no implementation here but any child class must provide the code i,e they pure virtual fucntion dont give details they just say what must exist
// Abstract base class: A class that inherits at least one pure virtual fucntion
/*

         here we will continue to learn poymorphism and inheritance later

*/
//Logical operators:
//&& = logical AND: true only if both sides are true (if the left side is false , c++ does not even evaluate the right side) i,e left false->right is Not checked and if left true->right is checked
//|| = logical OR : True if at least one side is true i,e if left side is true c++ skips the right side, left true->right NOT checked and left false->right is checked
//use AND when all conditions must be satisfied use OR when any one condition is enough
//carefull there is difference betweeen != and =! when we mean not equal alwyas we != and never =!

//here we will learn about Exceptions
//Exception handling in C++ feature that helps us deal with Unexpected problems at "RUNTIME"(while the program is running)
//Exceptions can be as 
//1)bad_alloc:allocation failure 2)bad_cast: due to dynamic cast 3)bad_exception:thrown when an exception type doesnt match any catch 4)bad_typeid 5)ios_base::failure=thrown by functions in the iostream library
//try and catch: theey exist togethere if by mistake we have only any one of thenm then compiler throws error
// A try block is a place where we put code that might cause an error
// A catch block contain anything we neeed to fix the problem such as printing an error message cleaning up resources,retrying , stopping the program safely
/*#include <iostream>
using namespace std;
double div( const double& a ,  const double& b){
    return a/b;
}
int main(){
    try{
        double x;
        double y;
        cin>>x>>y;
        if(y==0)
        throw"division by zero";//create an exception object+jump to a matching catch     //when we write throw".."" c++ crates an exception object of type const char*
        cout<<div(x,y)<<endl;
    }
    //catch(...){
     //   cout<<"error happend"<<endl;
   // }// we use this catch all whne we dont care what went wrong but soemthig went wrong it is evident form this exmaple
    catch (const char*msg){//msg is the variablw name it recives the value that was thrown in the throw statement
        cout<<"error happend "<<msg<<endl;
    }
}*/
//each throw transfers control to the nearest enclosing catch caluse taht can handle the type of exception that is thrown i,e if the throw is exceuted then the code below taht is not exceuted the program then goes on searching for catch and in between code is not excecuted
//The type of the object is the type of the thrown expression
//Terminate: Library Fcuntion that is called if an exception is not caught of if an excetion occurs while a handler is in process. Usually calls abort to end the program : this we can see by just replacing & by * in the catch block
//Rethrow : an empty throw -a throw that does not specify an expression
/*#include<iostream>
using namespace std;
double safe_divide(double a, double b){
    if(b==0){
        throw runtime_error("cannot divide by zero");
    }

return a/b;
}
double compute(){
    try{
        double x,y;
        cin>>x>>y;
        return safe_divide(x,y);
    }
    catch(const runtime_error& e){
        cerr<<e.what()<<'\n';
        throw;
    }
}
int main(){
    try{
        double result = compute();
        cout<<result<<'\n';
    }
    catch (const runtime_error& e){
        cerr<<e.what()<<'\n';
    }
}*/
//Exeption safe : term used to describe programs that behave correctly when exceptions are thrown
//stack Unwinding : Term used to describe the process wherby the fucntions leading to a thrown exceptions are exited in the search for a catch
/*#include <iostream>
using namespace std;

struct A {
    A()  { cout << "A constructed\n"; }
    ~A() { cout << "A destroyed\n"; }
};

struct B {
    B()  { cout << "B constructed\n"; }
    ~B() { cout << "B destroyed\n"; }
};

void g() {
    A a;                     // local object in g
    cout << "g(): about to throw\n";
    throw 1;                 // throw an int
    cout << "g(): this line is never printed\n";
}

void f() {
    B b;                     // local object in f
    cout << "f(): calling g()\n";
    g();                     // g will throw
    cout << "f(): this line is never printed\n";
}

int main() {
    try {
        cout << "main(): calling f()\n";
        f();
        cout << "main(): this line is never printed\n";
    }
    catch (...) {
        cout << "main(): caught exception\n";
    }
}*/
//Thread : A thread is like a small worker inside our program that runs a sequence of instruction .A normal program has at least one thread(the main thread), but we can create more threads so that multiple things happen at the same time within one process(parallel programming)
//Multithread/parallel programming: we let several threads run at the same time in one program that is our program can do mutiple calaculations in parallel
//Race condition: Several threads use the same variable/memory at the same time,because they "race" to read /write first,the final result becomes random/wrong
//Deadlock: two or more threads are waiting forever, each one is holding something the other needs hence nobody can continue, they are all stuck
//eg of deadlock: Thread A lcoked resource 1 and waits for resource 2 and Thread B locked resource 2 and wiats for resoursec 1 and therefore both wait forever ->deadlock
//hence Race condition and Deadlock are typical problems
/*#include<thread>
#include<iostream>
using namespace std;
int main(){
    cout<<std::thread::hardware_concurrency()<<'\n';
}*/
// this gives an output of 12 i,e my cpu can in principle execute up to 12 threads in parallel  basically we can create many threads but only 12 can really run at once; the rest will jsut wait and add overhead
// the other problem using thread is as a programmer we never know wherther the compielr might change the order of operations(due to compiler Optimisation) in a way that breaks our threaded code., Compiler transformation could introduce data race and the resulting execution could yield unexpected behaviors
//hence when we use thread we need a very clear memory model taht says whhat compilers are allowed to do with read/wries, otherwise optimiastion can cause hidden data races and weired bugs
//some examples to learn how to use or atleast how threds work
/*#include <iostream>
#include <thread>
using namespace std;
void work(){
    cout<<"hello form thread!\n";
}
int main(){
    thread t(work);//starts new thread that runs work()
    t.join();//tells main wait here until thread t is finished// the imporatnece of this is this thread must be joined or deatched before its destroyed if we dont do this our progarm may terminate just comment out this line and we wll get to see things
    cout<<"hello from main!'\n";
}*/
//syntac of thread is = thread t1(fucntion_to_run, arg1, arg2,......);
//here we can see creating thread has taken longer duration for the output
/*#include<iostream>
#include<thread>
#include <chrono>
using namespace std;
template<class T>
T add(T a , T b){
    return a+b;
}
template<class F>
F mull(F a, F b){
    return a*b;
}
double add1(double a ,double b){
    return a+b;
}
double mull1(double a , double b){
    return a*b;
}
int main(){
    int a,b;
    cin>>a>>b;
    //int sum_result =0;
   // int mul_result =0;
     auto start = std::chrono::system_clock::now();
    cout<<add(a,b)<<" "<<mull(a,b)<<endl;
        auto end = std::chrono::system_clock::now();
     std::chrono::duration<double>elapsed_second=end-start;
    cout<<elapsed_second.count()<<endl;
       auto start1 = std::chrono::system_clock::now();
    thread t1(add<int>,a,b);//template are a bluprint and here we have fucntion in template
    thread t2(mull<int>, a,b);
    //thread t3(add1,a,b);
    //thread t4(mull1,a,b);
    //thread t1([&](){sum_result=add(a,b);});//here we are using lamdas with thread
    //thread t2([&](){mul_result=mull(a,b);});
    t1.join();
    t2.join();
    //t3.join();
    //t4.join();

    cout<<"from thread 1:"<<add(a,b)<<'\n'<<"from thread 2:"<<mull(a,b)<<'\n'<<endl;//"using fucntion for thread for add 3:"<<add1(a,b)<<'\n'<<"using fucnction for thread 4 for mul:"<<mull1(a,b)<<endl;
     auto end1 = std::chrono::system_clock::now();
          std::chrono::duration<double>elapsed_second_1=end1-start1;
    cout<<elapsed_second_1.count()<<endl;
}*/
//use of lamda fucnction
/*#include<iostream>
using namespace std;
    int x ,a;//it not a good idea to declare a global variable
    auto sqr=[](int & a ,int & x){//[] in this bracket we capture and ()we do paramter
    return a*a+x;
};
int main(){
 cin>>a>>x;
    cout<<sqr(a,x)<<endl;
}*/
//in cpp precisely defines what a "memory location" is and say that if multiple thread touch the same lcoation without proper synchronisation and at least one writes then our program enters the undefined behaviour
/*#include<iostream>
#include<atomic>
#include <thread>
using namespace std;
//int counter =0;
atomic<int> counter{2};

void worker(){
    for(int i=0;i<100;++i)
    ++counter;
}
int main(){
    thread t1(worker);
    thread t2(worker);
    t1.join();
    t2.join();
    cout<<counter<<"\n";
}*/
//the above program sometimes prints one value and sometimes next value
//hence its clear that in cpp every variable lives in a well defined memory location, and different locations can be accessed independently but if two threads access the same location at the same time and at least one writes without atomics/locks, we get a data race(undefined behaviour)
//Atomics: its a special int that cpu updates in one individual step so two threads can safely do work at the same time without corrupting the values
//whole story in simple words is that : if two threads use different variable everything is fine but if two threads use the same variable at the same time and at least one thread writes to it it causes a data race
//a data race means : operation can interleave in weird ways, the result becomes unpredictable , our program has undefined behaviour 
//hence we fix this by using atomic variable for simple shared data .
//Mutex= a mutex protects a critical sections so that only one thread can execute it at a time
//mutex makes sure only one thread at a time touches 
//mutex is like a single key to a shared room
//A thread wants to ue some shared data it tries to lock the mutex(take the key)if anther thread already has the key this thread must wait. when the thread gets the key(lock) it is the only oen allowed to read/write that shared data.
/*#include<iostream>
#include<mutex>
#include <thread>
using namespace std;
int counter =0;
mutex m;

void worker(){
    for(int i=0;i<100;++i){
    m.lock();
    ++counter;
    m.unlock();//only the thread which has the lcok runs this line so counter cnat be corrupted
}
}
int main(){
    thread t1(worker);
    thread t2(worker);
    t1.join();
    t2.join();
    cout<<counter<<"\n";
}*/
//lock_guard and unique_lock are helper objects taht hold a mutex; they lock it when created and unlock it automatically so our code is safer and we dont forget to release the mutex
/*#include<iostream>
#include<mutex>
#include <thread>
using namespace std;
int counter =0;
mutex m;

void worker(){
    for(int i=0;i<100;++i){
    //lock_guard<mutex> guard(m);//hence with lock guard we dont have to explicity lock and unlock by our slef
    //unique_lock<mutex> lock(m);//with unique lock is lock guard with extra power we can write lock unlock manually also but with lock guard if we write lock unlcok it throwns errror
    ++counter;
    lock.unlock();
    }
}
int main(){
    thread t1(worker);
    thread t2(worker);
    t1.join();
    t2.join();
    cout<<counter<<"\n";
}*/
//unique_lock= object that manages a mutex(locks/unlocks,RAII)
//defer_lock=tells unique_lock "create me,but dont lock yet"
//std::lock(...)=fucnton that locks several unique_locks/mutexes at once safelt after which they are automatically unlocked when the unique_lock objects go out of scope
//std::async= "run this fucntion in the background and give me a future for the result"
//here what is happening is that the fuction calculate is computed by one thread and the othere thread brings the result
/*#include<iostream>
#include<future>
int calculate(){
    return 123;
}
using namespace std;
int main(){
    //auto fut=async(calculate);
    //auto fut =async(launch::async, calculate);//with this it runs in parallell with the rest of main, i,e start a real background thread now
    auto fut = async(launch::deferred, calculate);//this means dont run it now,only run it later when we ask for the result
    int res = fut.get();//we are asking for the result
    cout<<res<<endl;
    return 0;
}*/
//Future and Promise
//promise: i promise i will give you a value later... put the result into the channel
//Future: i will receive that promised value later... take the result out of the channel
/*#include<iostream>
#include<thread>
#include<future>
using namespace std;
void compute_product(promise<int>prom){
    int a=4;
    int b=5;
    int result=a*b;
    prom.set_value(result);
}
int main(){
    promise<int>prom;
    future<int>fut=prom.get_future();
    thread t(compute_product, std::move(prom));
    int value=fut.get();
    cout<<value<<endl;
    t.join();
}*/
//in CPP volatile is mainly devise register/memory-mapped I/O  unlike in java its related to thread and this concept

//seminar 3
//concpets are rules thats say which types are allowed for that generic code
/*#include<iostream>
#include<concepts>
using namespace std;
template<std::integral T>
T add(T x){
    return  x+1;
}
int main(){
    int a= add(5);
    long long b=add(59L);
    cout<<a<<"\n"<<b<<endl;
}*/
//template usually need their type T to have some properties and if we use the wrong type, the compiler fails with error so we need a clean way to write down such requirement for T let the compiler check thaem at the template boundary()
/*#include<iostream>
using namespace std;
template<class T>
T check(T &a, T &b){
    return a>b;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<check(a,b)<<endl;
}*/
#include<iostream>
#include<concepts>
using namespace std;
template<std::totally_ordered T>//used for generic code
bool check(const T &a , T & b){
    return a>b;
}
int main(){
std::string  a,b;
    cin>>a>>b;
    cout<<check(a,b)<<endl;
}
