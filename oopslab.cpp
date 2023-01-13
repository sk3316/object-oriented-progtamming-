// #include<iostream>
// using namespace std;
// int main(){
//     int fannumber;
//     cin>>fannumber;
//     if (fannumber<7)
//     {
//         cout<<"Fan of Ronaldo"<<endl;
//     }
//     else if (fannumber=7)
//     {
//         cout<<"Fan of Both Dhoni and Ronaldo"<<endl;
//     }
//     else 
//     {
//         cout<<"Fan of Dhoni"<<endl;
//     }
    
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
// long int n,sum=0,r;    
// cin>>n;    
// while(n>0)    
// {    
// r=n%10;    
// sum=sum*10+r;    
// n=n/10;    
// }    
// n=sum;    
// while(n>0)    
// {    
// r=n%10;    
// switch(r)    
// {    
// case 1:    
// cout<<"One";    
// break;    
// case 2:    
// cout<<"Two ";    
// break;    
// case 3:    
// cout<<"Three ";  
// break;    
// case 4:    
// cout<<"Four";  
// break;    
// case 5:    
// cout<<"Five ";  
// break;    
// case 6:    
// cout<<"Six ";   
// break;    
// case 7:  
// cout<<"Seven ";  
// break;  
// case 8:    
// cout<<"Eight ";    
// break;    
// case 9:    
// cout<<"Nine ";  
// break;    
// case 0:    
// cout<<"Zero ";  
// break;    
// default:    
// cout<<"tttt";    
// break;    
// }    n=n/10;    }  return 0;}



/*------------------------------week 1----------------------------*/


// ques 1

// #include <iostream>
// using namespace std;
// int main()
// {
// int n,a=23,b=13;    
// cin>>n;     
// switch(n)    
// {    
// case 1:    
// cout<<a+b;    
// break;    
// case 2:    
// cout<<a-b;    
// break;    
// case 3:    
// cout<<a*b;  
// break;    
// case 4:    
// cout.precision(4);
// cout<<fixed<<a/b;  
// break;    
// case 5:    
// cout<<a%b;  
// break;        
// default:    
// cout<<"error";    
// break;    
// }    
//    return 0;}

//ques 2

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     for (i = 1000; i <= 2000; i++)
//     {
//         if (i%8==0&&i%5==0)
//         {
//             cout<<i<<endl;
//         }
        
//     } 
//     return 0;
// }


//ques 14

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a;
//     cin>>b;
//     if(a+b>105&&a+b<200)
//     {
//         cout<<"200";
//     }
//     else
//     cout<<a+b;     
//     return 0;
// }


//ques 13

// #include<iostream>
// #include<string>
// #include<string.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter months 1-12 ";
//     cin>>n;
//     switch(n){
//     case 1:
//     cout<<"ur month JANUARY"<<endl;
//     cout<<"31";
//     case 2:
//     cout<<"ur month FEBRUARY"<<endl;
//     cout<<"28";
//     break;
//     case 3:
//     cout<<"ur month MARCH"<<endl;
//     cout<<"31";
//     break;
//     case 4:
//     cout<<"ur month APRIL"<<endl;
//     cout<<"30";
//     break;
//     case 5:
//     cout<<"ur month MAY"<<endl;
//     cout<<"31";
//     break;
//     case 6:
//     cout<<"ur month JUNE"<<endl;
//     cout<<"30";
//     break;
//     case 7:
//     cout<<"ur month JULY"<<endl;
//     cout<<"31";
//     break;
//     case 8:
//     cout<<"ur month AUGUST"<<endl;
//     cout<<"31";
//     break;
//     case 9:
//     cout<<"ur month SEPTEMBER"<<endl;
//     cout<<"30";
//     break;
//     case 10:
//     cout<<"ur month OCTOBER"<<endl;
//     cout<<"31";
//     case 11:
//     cout<<"ur month NOVEMBER"<<endl;
//     cout<<"30";
//     case 12:
//     cout<<"ur month DECEMBER"<<endl;
//     cout<<"31";
//     default:
//     cout<<"wrong month input";
//     break;
//     }
//     return 0;
// }

//ques 4
// #include<stdio.h>
// int main()
// {
//    int a,b,c,min;
//    printf(“Enter Three numbers : “);
//    scanf(“%d%d%d”,&a,&b,&c);
//    if( (a<b) && (a<c) )
//    {
//       min = a;
//    }
//    else if(b<c)
//    {
//       min = b;
//    }
//    else
//    {
//       min = c;
//    }
//    printf(“Min of %d, %d and %d is : %dn“,a,b,c,min);
//    return 0;
// }

//ques 5
// #include <iostream>  
// #include <string>  
// using namespace std;
 
// int main() {
//    string s;
//    int i;
//    cin>>s;
//    for ( i = s.length(); i >= 0; i--)
//    {
//       cout<<s[i];
//    }
//    return 0;
// }

//ques 15

// #include<iostream>
// using namespace std;
// int main()
// {
//    int n,i,j;
//    cin>>n;
//    for ( i = n; i >= 1; i--)
//    {
//       for ( j = 1; j >= i; j++)
//       {
//          cout<<i<<" ";
//       }
//       cout<<endl;
//    }
//    return 0;
// }

//ques 6

// #include<iostream>
// #include<stdlib.h>
// using namespace std;
// int main(){
//    int i=1+rand()%9;
//    int n;
//    cin>>n;
//    jump:
//    cin>>n;
//    if(n!=i){
//       cout<<"try again";
//       goto jump;
//    }else
//    cout<<"right guess";
//    return 0;
// }

/*------------elabs----------*/


// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main(){
//     int weightinearth;
//     float weightinmoon;
//     cin>>weightinearth;
//     weightinmoon=(16.600/100.000)*weightinearth;
//     cout<<weightinmoon;
//     return 0;
// }


// #include<iostream>
// #include<math.h>
// #include<iomanip>
// using namespace std;
//     int main(){
//     int a[10],n,i,length,sum=0;
//     cin>>n;
//     for ( i = 0; i <= n; i++)
//     {
//         cin>>a[i];
//     }
//     for ( i = 0; i <= length; i++)
//     {
//         sum+=pow(a[i],3);
//     }
//     cout<<sum;
    
//     return 0;
// }




// #include<iostream>
// #include<math.h>
// using namespace std;
//     int main(){
//         int i,n,j;
//         cin>>n;
//         cin>>j;
//             if (n<10)
//             {
//                 switch (n)
//                 {
//                 case 1:
//                     cout<<"one"<<endl;
//                     // break;
//                 case 2:
//                     cout<<"two"<<endl;
//                     // break;
//                 case 3:
//                     cout<<"three"<<endl;
//                     // break;
//                 case 4:
//                     cout<<"four"<<endl;
//                     // break;
//                 case 5:
//                     cout<<"five"<<endl;
//                     // break;
//                 case 6:
//                     cout<<"six"<<endl;
//                     // break;
//                 case 7:
//                     cout<<"seven"<<endl;
//                     // break;
//                 case 8:
//                     cout<<"eight"<<endl;
//                     // break;
//                 case 9:
//                     cout<<"nine"<<endl;
//                     // break;
                
//                 default:
//                 cout<<"";
//                     break;
//                 }
//             }
            
//         for ( i = 10; i <= j; i++)
//         {
//             if (i%2==0)
//             {
//                 cout<<"even"<<endl;
//             }
//             else if(i%2!=0)
//             {
//                 cout<<"odd"<<endl;
//             }
    
//         }
        
//     return 0;
// }



// #include <stdio.h>
// #include <math.h>

// void update(int *a,int *b) {
//    int sum=a+b;
// }

// int main() {
//     int a, b,sum;
//     int *pa = &a, *pb = &b;
    
//     scanf("%d %d", &a, &b);
//     update(pa, pb);
//     printf("%d\n%d", a, b);


// #include<iostream>
// using namespace std;
// int main(){
//     int ageofcitizen;
//     cin>>ageofcitizen;
//     if (ageofcitizen>=18&&ageofcitizen<=60)
//     {
//         cout<<"Eligible for Voting";
//     }
//     else
//         cout<<"Not Eligible for Voting";
    
//     return 0;
// }



// #include<iostream>
// using namespace std;
//     class smallobj
//     {
//     private:
//         int somedata;
//     public:
//         setdata(int d)
//         {somedata=d;}
//         showdata()
//         {cout<<"data is: "<<somedata<<endl;}
//     };
//     int main()
//     {smallobj s1,s2;
//     s1.setdata(6969);
//     s2.setdata(9696);
//     s1.showdata();
//     s2.showdata();
//     return 0;
// }


// #include<iostream>
// using namespace std;
//     class car
//     {private:
//     int car_no;
//     int model_no;
//     string name;
//     public:
//     void setdata(int cn,int mn, string nm);
//     {car_no=cn;
//     model_no=mn;
//     name=nm;}
//     void showdata()
//     {
//         cout<<"car number is: "<<cn;
//     cout<<"car model number is: "<<mn;
//     cout<<"car name is: "<<nm;
//     }
// };
//     int main(){
//         car c1,c2;
//        c1.setdata(6969,7645,"merc");
//        c2.setdata(9696,5678,"bmw");
//         c1.showdata();
//         c2.showdata();
//         return 0;
// }
// #include <iostream>  
// using namespace std;  
// int main()  
// {  
// int a[10], n, i;    
// cout<<"Enter the number to convert: ";    
// cin>>n;    
// for(i=0; n>0; i++)    
// {    
// a[i]=n%2;    
// n= n/2;  
// }    
// cout<<"Binary of the given number= ";    
// for(i=i-1 ;i>=0 ;i--)    
// {    
// cout<<a[i];    
// } 
// return 0;   
// }  
// #include<iostream>
// using namespace std;
// class T4Tutorials_Floyds_Triangle
// {
// public:
// int i,j,p,q,n;
// public:
// T4Tutorials_Floyds_Triangle() {
//               cout<<"Please enter the no of rows: ";
//            cin>>n;
//                 for(i=1;i<=n;i++)
//               {
// if(i%2==0)
// {
// p=1;
// q=0;
// }
// else
// {
// p=0;
// q=1;
// }
// for(j=1;j<=i;j++)
// {
// if(j%2==0)
// {
// cout<<p;
// }
// else
// {
// cout<<q;
// }
// }
// cout<<endl;
// }
// }
// ~T4Tutorials_Floyds_Triangle()      
// {
// }
// };
// int main()
// {
// T4Tutorials_Floyds_Triangle object;
// return 0;
// }

// #include<iostream>
// using namespace std;
// class cube
// {
//            public:
//             double side;
//             double volume()
//              {
//                return(side*side*side);
//               }
//               cube(double side1)
//              {
//              cout << "\nA constructor is called" << endl;
//                 side=side1;
//               }
//               cube()
//            {
//             cout << "\nA default constructor is called " << endl;
//               }
//                   ~cube()
//                {
//                 cout << "\nDestructing " << side << endl;
//               }
// };
// int main()
// {
//             cube c1(2.34);
//             cube c2;
//             cout << "\nThe side of the cube is: " << c1.side << endl;
//             cout << "\nThe volume of the first cube is : " << c1.volume() << endl;
//             cout << "\nEnter the length of the second cube : " ;
//             cin >> c2.side;
//             cout << "\nThe volume of second cube is : " << c2.volume() << endl;
//             return(0);

// }

// #include<iostream>
// using namespace std;
// class pyramid
// {
// private:
// int r,T4Tutorials,SHOW,n,no;
// public:
// pyramid()  //constructor
// {
// no=5;
// n=no;
// }
// void sol()
// {
// for(r=1;r<=no;r++)
// {
// for(T4Tutorials=1;T4Tutorials<=n;T4Tutorials++)
// {
// cout<<" ";
// }
// n--;
// for(SHOW=1;SHOW<=r;SHOW++)
// {
// cout<<" "<<r;
// }
// cout<<endl;
// }
// }
// ~pyramid()  //destructor
// {
// cout<<endl<<"object destroyed";
// }
// };
// int main()
// {
// pyramid ob;
// ob.sol();
// return 0;
// }

// #include<iostream>
// using namespace std;

// class base {
// public:
// 	virtual void print()
// 	{
// 		cout << "print base class\n";
// 	}

// 	void show()
// 	{
// 		cout << "show base class\n";
// 	}
// };

// class derived : public base {
// public:
// 	void print()
// 	{
// 		cout<< "print derived class\n";
// 	}

// 	void show()
// 	{
// 		cout<< "show derived class\n";
// 	}
// };

// int main()
// {
// base *ptr;

	
// 	base b;
// 	derived d;

// ptr=&d;


	
// 	d.show(); //derifved show
// 	d.print(); //derived print
	
// 	b.show(); // base show
// 	b.print(); // base print

// ptr->show();
// 	ptr-> print();

// 	return 0;
// }




// #include <iostream>
// using namespace std;
// ////////////////////////////////////////////////////////////////
// class Base //base class
// {
// public:
// virtual void show() = 0; //pure virtual function
// };
// ////////////////////////////////////////////////////////////////
// class Derived : public Base //derived class 1
// {
// public:
// void show()
// { cout << "Derived show\n"; }
// };
// ////////////////////////////////////////////////////////////////
// // class Derv2 : public Base //derived class 2
// // {
// // public:
// // void show()
// // { cout << “Derv2\n”; }
// // };
// ////////////////////////////////////////////////////////////////
// int main()
// {
// // // Base bad; //can’t make object from abstract class
// // Base* arr[2]; //array of pointers to base class
// // Derv1 dv1; //object of derived class 1
// // Chapter 11 510
// // 12 3087 CH11 11/29/01 2:19 PM Page 510
// // Derv2 dv2; //object of derived class 2
// // arr[0] = &dv1; //put address of dv1 in array
// // arr[1] = &dv2; //put address of dv2 in array
// // arr[0]->show(); //execute show() in both objects
// // arr[1]->show();
// Derived d;
// d.show();
// return 0;
// }


// #include <iostream>
// using namespace std;
// ////////////////////////////////////////////////////////////////
// class os //base class
// {
// public:
// virtual void size() = 0; //pure virtual function
// };
// ////////////////////////////////////////////////////////////////
// class windows: public os //derived class 1
// {
// public:
// void size()
// { cout << "size 5\n"; }
// };
// ////////////////////////////////////////////////////////////////
// // class Derv2 : public Base //derived class 2
// // {
// // public:
// // void show()
// // { cout << “Derv2\n”; }
// // };
// ////////////////////////////////////////////////////////////////
// int main()
// {
// // // Base bad; //can’t make object from abstract class
// // Base* arr[2]; //array of pointers to base class
// // Derv1 dv1; //object of derived class 1
// // Chapter 11 510
// // 12 3087 CH11 11/29/01 2:19 PM Page 510
// // Derv2 dv2; //object of derived class 2
// // arr[0] = &dv1; //put address of dv1 in array
// // arr[1] = &dv2; //put address of dv2 in array
// // arr[0]->show(); //execute show() in both objects
// // arr[1]->show();
// windows w;
// w.size();

// return 0;
// }

// #include <iostream>
// using namespace std;
////////////////////////////////////////////////////////////////
// class shape //base class
// {
// public:
// virtual void cal_area() = 0; //pure virtual function
// };
// ////////////////////////////////////////////////////////////////
// class rectangle: public shape//derived class 1
// {
// public:
// int l,b;
// void get()

// {   cin>>l>>b;
//     cout<<"area"<<l*b; }
// };
////////////////////////////////////////////////////////////////
// class Derv2 : public Base //derived class 2
// {
// public:
// void show()
// { cout << “Derv2\n”; }
// };
////////////////////////////////////////////////////////////////
// int main()
// {
// // Base bad; //can’t make object from abstract class
// Base* arr[2]; //array of pointers to base class
// Derv1 dv1; //object of derived class 1
// Chapter 11 510
// 12 3087 CH11 11/29/01 2:19 PM Page 510
// Derv2 dv2; //object of derived class 2
// arr[0] = &dv1; //put address of dv1 in array
// arr[1] = &dv2; //put address of dv2 in array
// arr[0]->show(); //execute show() in both objects
// arr[1]->show();
// windows w;
// w.size();

// return 0;
// }


// #include <iostream>
// using namespace std;

// class distance
// {
//     public:
//     int meters;
//     int centimeters;

//     public:
//     distance(): meters(0), centimeters(0.0);
//     {}
//     distance(int mtr, int cms): meters(mtr), centimeters(cms);
//     {}

//     void getdist()
//     {
//         cout<<"enter distance in metres : "<<endl;
//         cin>>meters;
//     }

//     void showdata()
//     {
//         cout<<"cms will be: "<< meters*100 << endl;
//     }
// }
//     int main()
//     {
//         distance d1,d2;
//         d1.getdist();
//         d2.getdist();

//         d1.showdata();
//         d2.showdata();

//         return 0;
//     }



// #include<iostream>
// #include<string.h>
// #include<cstring> 
// using namespace std;
// class costr { 
// public:
// char str[25];
// costr(char str1[])
// {
// strcpy(this->str, str1);
// }
// int operator==(costr s2)
// {
// if (strcmp(str, s2.str) == 0)
// return 1;
// else
// return 0;
// }
// };
// void compare(costr s1, costr s2)
// {
// if (s1 == s2)
// cout << s1.str << " is equal to "<< s2.str << endl;
// else {
// cout << s1.str << " is not equal to "<< s2.str << endl;
// } }
// void enter()
// { char str1[] ="SHIT"; char str2[] ="SHIT"; costr
// s1(str1); 
// costr 
// s2(str2);
// compare(s1, s2);

// }
// int main()
// {
// enter();
// return 0;
// }



// #include<iostream>
// using namespace std;
// class Complex { 
// private:
// float real;
// float imag;
// public:
// Complex() : real(0), imag(0) {}
// void input() { 
// cout<< "Real part: "; 
// cin>> real; 
// cout<<"Img part: "; 
// cin >>imag;}
// Complex operator + (const Complex& obj){
// Complex temp;
// temp.real = real + obj.real;
// temp.imag = imag + obj.imag;
// return temp;
// }
// void output(){
// cout << "Added Complex number: " << real << "+" << imag << "i";}
// };
// int main(){
// Complex complex1, complex2, result;
// cout << "First complex No:-\n";
// complex1.input();
// cout << "Second complex No:-\n";
// complex2.input();
// result = complex1 + complex2;
// result.output();
// return 0;
// }


// #include <iostream>
// using namespace std;
// class Swap {
// public: string
// str,str2;
// Swap(string str1)
// {
// str=str1;
// }
// void operator=(Swap s2)
// {
// str2=str;
// str=s2.str;
// s2.str=str2;
// }
// };
// void display(Swap s1, Swap s2)
// {
// cout<<"First String = "<<s1.str<<"\nSecond String = "<<s2.str;
// }
// int main() { string str;
// cout<<"Enter first string : ";
// cin>>str; Swap obj1(str);
// cout<<"Enter second string : ";
// cin>>str; Swap
// obj2(str); Swap
// obj3("");
// obj3=obj1;
// obj1=obj2;
// obj2=obj3;
// display(obj1,obj2);
// return 0;
// }



// #include <iostream>
// #include <cmath>
// using namespace std;
// #define PI 3.1459
// class Shapes{
// public:
// void Volume(int); void
// Volume(const float,int); void
// Volume(const float,int,int);
// };
// void Shapes::Volume(int side){
// cout<<"Volume of Cube: "<<pow(side,3)<<endl;
// }
// void Shapes::Volume(const float pi,int radius){
// cout<<"Volume of Sphere: "<<(4/3)*pi*pow(radius,3)<<endl;
// }
// void Shapes::Volume(const float pi,int radius,int height){
// cout<<"Volume of Cylinder: "<<pi*pow(radius,2)*height<<endl;
// } int main(){ Shapes vol; int side,radius,height; cout<<"Choose to which you want to
// Find Volume: \n1.Cube\n2.Sphere\n3.Cylinder\n"; int choice;
// cout<<"Enter choice: ";
// cin>>choice; 
// if(choice==1){
// cout<<"\nEnter side of the cube: ";
// cin>>side; vol.Volume(side);
// }
// else if(choice==2){
// cout<<"\nEnter radius of the Sphere: ";
// cin>>radius;
// vol.Volume(PI,radius);
// }
// else if(choice==3){
// cout<<"\nEnter radius of the Cylinder: ";
// cin>>radius;
// cout<<"\nEnter height of the Cylinder: ";
// cin>>height;
// vol.Volume(PI,radius,height);

// }
// else
// cout<<"Invalid Choice";
// }





// #include <iostream>
// using namespace std; 
// class Arithmetic
// { float x,y;
// public:
// Arithmetic()
// {
// x=0;
// y=0;
// }
// Arithmetic(float r, float i)
// {
// x=r;
// y=i;
// }
// Arithmetic operator+(Arithmetic c)
// {
// Arithmetic cmp;
// cmp.x=(x*c.y)+(y*c.x);
// cmp.y=y*c.y; return
// (cmp);
// }
// Arithmetic operator-(Arithmetic c)
// {
// Arithmetic cmp; cmp.x=(x*c.y)-
// (y*c.x); cmp.y=y*c.y; return
// (cmp);
// }

// Arithmetic operator*(Arithmetic c)
// {
// Arithmetic cmp;
// cmp.x=x*c.x;
// cmp.y=y*c.y; return
// (cmp);
// }
// Arithmetic operator/(Arithmetic c)
// {
// Arithmetic cmp;
// cmp.x=x*c.y;
// cmp.y=y*c.x; return
// (cmp);
// }
// void display1()
// { if(y==0||x==0)
// cout<<"The addition is: 0\n";
// else if(y==1)
// cout<<"The addition is: "<<x<<endl;
// else
// cout<<"The addition is: "<<x<<"/"<<y<<endl;
// }
// void display2()
// {
// if(y==0||x==0)
// cout<<"The subtraction is: 0 \n";
// else if(y==1) cout<<"The subtraction is: "<<x<<endl; else
// cout<<"The subtraction is: "<<x<<"/"<<y<<endl;
// }
// void display3()
// {
// if(y==0||x==0)
// cout<<"The multiplication is: 0\n";
// else if(y==1)
// cout<<"The multiplication is: "<<x<<endl;
// else
// cout<<"The multiplication is: "<<x<<"/"<<y<<endl;
// }
// void display4()
// {
// if(y==0||x==0)
// cout<<"The division is: 0\n";
// else if(y==1)
// cout<<"The division is: "<<x<<endl;
// else if(x==y)
// cout<<"The division is: 1\n";
// else
// cout<<"The division is: "<<x<<"/"<<y<<endl;
// } }; int
// main()
// {
// Arithmetic c3,c4,c5,c6;
// int r1,r2,r3,r4;
// cout<<"Enter the first numerator and denomenator: \n"; cin>>r1;cout<<"--\n";
// cin>>r2;
// cout<<"Enter the second numerator and denomenator: \n";
// cin>>r3;cout<<"--\n"; cin>>r4;
// Arithmetic c1(r1,r2);
// Arithmetic c2(r3,r4);
// c3=(c1+c2); c4=(c1-
// c2); c5=(c1*c2);
// c6=(c1/c2);
// c3.display1();
// c4.display2();
// c5.display3();
// c6.display4(); 
// return 0;
// }



// #include<iostream> 
// using namespace std; 
// float vol(int,int);
//  float vol(float); 
//  int vol(int); 
//  int main(){ 
// int r,h,a; 
// float t;
// cout<<"Enter radius and height of a cylinder:"; 
// cin>>r>>h; 
// cout<<"Enter side of cube:";
// cin>>a; 
// cout<<"Enter radius of sphere: ";
// cin>>r; 
// cout<<"Volume of cylinder is "<<vol(r,h);
// cout<<"\nVolume of cube is "<<vol(a);
// cout<<"\nVolume of sphere is "<<vol(r);
// return 0;}
// float vol(int r ,int h){ 
// return(3.14*r*r*h); }
// float vol(float r1){ 
// return((4*3.14*r1*r1*r1)/3); }
// int vol(int a){ 
// return(a*a*a); }




// #include<iostream> 
// using namespace std; 
// int area(int); 
// int area(int,int); 
// float area(float); 
// float area(float,float); 
// int main() { 
// int s,l,b,r; 
// float rbs,ht; 
// cout<<"Enter side of a square:"; 
// cin>>s; 
// cout<<"Enter length and breadth of rectangle:"; 
// cin>>b; 
// cout<<"Enter radius of circle:"; 
// cin>>r; 
// cout<<"Enter base and height of triangle:"; 
// cin>>rbs>>ht; 
// cout<<"Area of square is"<<area(s); 
// cout<<"\nArea of rectangle is "<<area(l,b); 
// cout<<"\nArea of circle is "<<area(r); 
// cout<<"\nArea of triangle is "<<area(rbs,ht); 
// return 0;}
// int area(int s){ 
// return(s*s); }
// int area(int I,int b){ 
// return(I*b); }
// float area(float r){ 
// return(3.14*r*r); }
// float area(float bs,float ht){ 
// return((bs*ht)/2); }



// #include<iostream>
// using namespace std;
// class Number
// {
//    public:
//    int n;
//    void getnum()
//    {
//       cout<<"Enter a number";
//       cin>>n;
//    }
// };

// class Square: public Number
// {
//     public:
//   //  int n;
//      void sq()
//      {  //cout<<"Enter a number";
//         //cin>>n;
//         cout<<"square of a number ="<<(n*n)<<endl;
//      }
// };
// class Cube: public Number
// {
//     //public:
//     //int n;
//     public:
//     void cb()
//     {   //cin>>n;
//         cout<<"cube of number="<<(n*n*n)<<endl;
//     }
// };
// int main()
// {
//     Square s;
//     s.getnum();
//     s.sq();
//     Cube c;
//     c.getnum();
//     c.cb();
//     return 0;
// }



// #include <iostream>
// using namespace std;
// class student
// {
// public:
// int reg_no107;  
// char nm[50];
// void input() {
// cout<<"enter register no."<<endl;
// cin>>reg_no;
// cout<<"enter name"<<endl;
// cin>>nm;
// }
// };
// class stinfo : public student{
//     public:
//     void display(){
//     cout<<"name of the student is: "<<nm<<endl;
//     cout<<"registration no. is: "<<reg_no<<endl;
// }    
// };
// int main()
// {   stinfo st;
//     st.input();
//     st.display();

//     return 0;
// }




// template< class T1, class T2, class T3>

// void max(T1 a, T2 b, T3 c )
// {   int big = (a>b && a>c)?a:(b>c?b:c); 
//     cout<<big;
// }
// int main()
// {   max<int,int,int>(9,4,7);

// #include<iostream>
// using namespace std;
// class employeename 
// {
//     public:
//     char name[50];
//     // char address[100];
//     // int salary;
//     void getdetails(){
//         cout<<"enter the name of the student "<<endl;
//         cin>>name;
//         // cout<<"enter the address of the student "<<endl;
//         // cin>>address;
//         // cout<<"enter the salary of the student "<<endl;
//         // cin>>salary;
//     }};
// class employeeaddsal
// {   
//     public:
//     //char name[50];
//     char address[100];
//     int salary;
//     void viewdetails(){
//         cout<<"enter the address of the student "<<endl;
//         cin>>address;
//         cout<<"enter the salary of the student "<<endl;
//         cin>>salary;    
//     }};







//     return 0;
// }



// #include <iostream>
// using namespace std;
// class person
// {
//     public:
//     string name;
//     int age;
// };
// class professor:public person
// {
//     public:
//   int publications;
//   int cur_id;
//   void getdata()
//   {
//    cin>>name>>age>>publications>>cur_id;   
//   }
//   void putdata()
//   {
//       cout<<"Name="<<name;
//       cout<<"Age="<<age;
//       cout<<"curid="<<cur_id;
//       cout<<"publication="<<publications;
//   }
// };
// class student:virtual public person
// {
//     public:
//     //int size=5;
//     int marks[5];
//    // int cur_id;
//     void getdata()
//     {
//         for(int i = 0; i < 5; i++)
//         {
//             cin>>marks[i];
//         }
//         //cin>>name>>age;
//     }
//     void putdata()
//     {
//         int sum = 0;
//       for(int i = 0; i < 5; i++){
//           sum+=marks[i];
//         }  
//         cout<<sum<<endl;
//         //cout<<name<<" "<<age<<" "<<cur_id<<endl;
//     }
// };
// int main()
// {
//     professor ob;
//     student ob1;
//     ob.getdata();
//     ob.putdata();
//     ob1.getdata();
//     ob1.putdata();
// }


// #include<iostream> 
// using namespace std; 
 
// class base { 
// public: 
//  virtual void print() 
//  { 
//  cout << "print base class\n"; 
//  } 
 
//  void show() 
//  { 
//  cout << "show base class\n"; 
//  } 
// }; 
 
// class derived : public base { 
// public: 
//  void print() 
//  { 
//  cout << "print derived class\n"; 
//  } 
 
//  void show() 
//  { 
//  cout << "show derived class\n"; 
//  } 
// }; 
 
// int main() 
// { 
//  base *bptr; 
//  derived d; 
//  bptr = &d; 
 
//  bptr->print(); 
//  bptr->show(); 
 
//  return 0; 
// } 


// #include <iostream> 
// using namespace std; 
// class ClassB; 
// class ClassA { 
 
//  public: 
//  ClassA() : numA(12) {} 
 
//  private: 
//  int numA; 
 
//  friend int add(ClassA, ClassB); 
// }; 
// class ClassB { 
//  public: 
//  ClassB() : numB(1) {} 
 
//  private: 
//  int numB; 
 
//  friend int add(ClassA, ClassB); 
// }; 
// int add(ClassA objectA, ClassB objectB) { 
//  return (objectA.numA + objectB.numB); 
// } 
// int main() { 
//  ClassA objectA; 
//  ClassB objectB; 
//  cout << "Sum: " << add(objectA, objectB); 
//  return 0; 
// } 




// #include <iostream>
// using namespace std;
// class person
// {
//     public:
//     string name;
//     int age;
// };
// class professor:public person
// {
//     public:
//   int publications;
//   int cur_id;
//   void getdata()
//   {
//    cin>>name>>age>>publications;   
//   }
//   void putdata()
//   {
//       cout<<"Name="<<name;
//       cout<<"Age="<<age;
//       cout<<"curid="<<cur_id;
//       cout<<"publication="<<publications;
//   }
// };
// class student:virtual public person
// {
//     public:
//     int size=5;
//     int marks[5];
//     int cur_id;
//     void getdata()
//     {
//         for(int i = 0; i < size; i++){
//             cin>>marks[i];
//         }
//         cin>>name>>age;
//     }
//     void putdata()
//     {
//         int sum = 0;
//       for(int i = 0; i < 5; i++){
//           sum+=marks[i];
//         }  
//         cout<<sum<<endl;
//         cout<<name<<" "<<age<<" "<<cur_id<<endl;
//     }
// };
// int main()
// {
//     professor ob;
//     student ob1;
//     ob.getdata();
//     ob.putdata();
//     ob1.getdata();
//     ob1.putdata();
// }




// #include <iostream>
// #include <stdio.h>
// using namespace std;

// //Base Class - basicInfo
// class basicInfo {
// protected:
//     char name[30];
//     int empId;
//     char gender;

// public:
//     void getBasicInfo(void)
//     {
//         cout << "Enter Name: ";
//         cin.ignore(1);
//         cin.getline(name, 30);
//         cout << "Enter Emp. Id: ";
//         cin >> empId;
//         cout << "Enter Gender: ";
//         cin >> gender;
//     }
// };

// //Base Class - deptInfo
// class deptInfo : private basicInfo {
// protected:
//     char deptName[30];
//     char assignedWork[30];
//     int time2complete;

// public:
//     void getDeptInfo(void)
//     {
//         getBasicInfo(); //to get basic info of an employee
//         cout << "Enter Department Name: ";
//         cin.ignore(1);
//         cin.getline(deptName, 30);
//         cout << "Enter assigned work: ";
//         fflush(stdin);
//         cin.getline(assignedWork, 30);
//         cout << "Enter time in hours to complete work: ";
//         cin >> time2complete;
//     }
//     void printDeptInfo(void)
//     {
//         cout << "Employee's Information is: " << endl;
//         cout << "Basic Information...:" << endl;
//         cout << "Name: " << name << endl; //accessing protected data
//         cout << "Employee ID: " << empId << endl; //accessing protected data
//         cout << "Gender: " << gender << endl
//              << endl; //accessing protected data

//         cout << "Department Information...:" << endl;
//         cout << "Department Name: " << deptName << endl; //accessing protected data
//         cout << "Assigned Work: " << assignedWork << endl; //accessing protected data
//         cout << "Time to complete work: " << time2complete << endl; //accessing protected data
//     }
// };

// //another Base Class : loadInfo
// class loanInfo : private basicInfo {
// protected:
//     char loanDetails[30];
//     int loanAmount;

// public:
//     void getLoanInfo(void)
//     {
//         getBasicInfo(); //to get basic info of an employee
//         cout << "Enter Loan Details: ";
//         cin.ignore(1);
//         cin.getline(loanDetails, 30);
//         cout << "Enter loan amount: ";
//         cin >> loanAmount;
//     }
//     void printLoanInfo(void)
//     {
//         cout << "Employee's Information is: " << endl;
//         cout << "Basic Information...:" << endl;
//         cout << "Name: " << name << endl; //accessing protected data
//         cout << "Employee ID: " << empId << endl; //accessing protected data
//         cout << "Gender: " << gender << endl
//              << endl; //accessing protected data

//         cout << "Loan Information...:" << endl;
//         cout << "Loan Details: " << loanDetails << endl; //accessing protected data
//         cout << "Loan Amount : " << loanAmount << endl; //accessing protected data
//     }
// };

// int main()
// {
//     //read and print department information
//     deptInfo objD;

//     objD.getDeptInfo();
//     objD.printDeptInfo();

//     cout << endl
//          << endl;
//     //read and print loan information
//     loanInfo objL;

//     objL.getLoanInfo();
//     objL.printLoanInfo();

//     return 0;
// }




// #include <iostream>
// using namespace std;

// class Number {
// private:
//     int num;

// public:
//     void getNumber(void)
//     {
//         cout << "Enter an integer number: ";
//         cin >> num;
//     }
//     //to return num
//     int returnNumber(void)
//     {
//         return num;
//     }
// };

// //Base Class 1, to calculate square of a number
// class Square : public Number {
// public:
//     int getSquare(void)
//     {
//         int num, sqr;
//         num = returnNumber(); //get number from class Number
//         sqr = num * num;
//         return sqr;
//     }
// };

// //Base Class 2, to calculate cube of a number
// class Cube : public Number {
// private:
// public:
//     int getCube(void)
//     {
//         int num, cube;
//         num = returnNumber(); //get number from class Number
//         cube = num * num * num;
//         return cube;
//     }
// };
//
// int main()
// {
//     Square objS;
//     Cube objC;
//     int sqr, cube;

//     objS.getNumber();
//     sqr = objS.getSquare();
//     cout << "Square of " << objS.returnNumber() << " is: " << sqr << endl;

//     objC.getNumber();
//     cube = objC.getCube();
//     cout << "Cube   of " << objS.returnNumber() << " is: " << cube << endl;

//     return 0;
// }




// #include <iostream>
// using namespace std;
// template< class t, class u>
// class sample
// {
//     t a;
//     u b;
//     public:
//     sample()
//     {
//         cin>>a>>b;
//         cout<<a<<b<<endl;
//     }
// };
// int main()
// {
//     sample<int,float> S;
//     sample<int,char> Sh;
//     return 0;
// }



// #include <iostream>
// using namespace std;
// template< class deposit , class withdraw , class interest_rate >
// class account
// {
//     deposit d;
//     withdraw w;
//     interest_rate ir;
//     public:
//     account()
//     {   cout<<"enter deposit, withdraw and interest rate resp."<<endl;
//         cin>>d>>w>>ir;
//         cout<<((d-w)*(ir)+(d-w))<<endl;
//     }
// };
// int main()
// {
//     account<int,int,float> A;
//     return 0;
// }







// Write a program to define the function template for calculating the square of given
// numbers with different data types.



// #include <iostream>
// using namespace std;
// template< class sq >
// class square
// {
//     sq x;
    
//     public:
//     square(int x)
//     {   //cout<<"enter x" <<endl;
//         //cin>>x;
//         cout<<x*x<<endl;
//     }
// };
// int main()
// {
//     square<float> (5);
//     return 0;
// }



// #include <iostream>
// using namespace std;
// template <class T>
// T max(T a,T b, T c)
// {
//     int max=(a>b&&a>c)?a:(b>c)?b:c;
//     return max;
// }
// int main()
// {
//     cout<<max<int>(4,8,2);
//     return 0;
// }



// Write a program to illustrate how to define and declare a class template for reading two
// data items from the keyboard and to find their sum.


// #include <iostream>
// using namespace std;
// template< class sa, class as >
// class sumadd
// {
//     sa x;
//     as y;
//     public:
//     sumadd()
//     {   cout<<"enter x and y" <<endl;
//         cin>>x>>y;
//         cout<<x+y<<endl;
//     }
// };
// int main()
// {
//     sumadd<float,float> s;
//     return 0;
// }




// Write a Function Template in C++ to find the maximum number among the 3 given
// numbers.


// #include <iostream>
// using namespace std;
// template< class T1, class T2, class T3>
// void max(T1 a,T2 b,T3 c)
// {
//     int big=(a>b&&a>c)?a:(b>c?b:c);
//     cout<<big;
// }
// int main()
// {
//     max<int,int,int> (9,4,7);
//     return 0;
// }


// #include <iostream>
// using namespace std;
// template<class t>
// void Swap(t &a, t&b)
// {   cout<<"enter a and b: "<<endl;
//     cin>>a>>b;
//     cout<<"before swap"<<a<<b<<endl;
//     t temp = a;
//     a = b;
//     b = temp;
//     cout<<"after swap";
//     cout<<a<<b;
// }
// int main()
// {
//     int x,y;
//     Swap(x,y);
    //cout<<x<<endl<<y<<endl;
    //float p=4.6,q=8.9;
    //Swap(p,q);
    //cout<<p<<endl<<q<<endl;
   // char s='M',r='R';
    //Swap(s,r);
   //cout<<s<<endl<<r;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// template< class a, class b, class c>
// class Swap
// {
//     a x;
//     b y;
//     c temp;
//     //t z;
//     public:
//     Swap()
//     {   cout<<"enter x, y: " <<endl;
//         cin>>x>>y;
//         temp = x;
//         x=y;
//         y=temp;
//         cout<<x<<y<<temp<<endl;
//     }
// };
// int main()
// {
//     Swap<int,int> S;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class test
// {   public:
//     test()
//     {cout<<"constructor ";}
//     ~test()
//     {cout<<"destructor ";}
// };
// int main()
// {
//     //int a=10;
//     try
//     {test t;
//     throw 10;
//     }
//     catch(int e)
//     { cout<<"the value is "<<e<<endl;}
// //         try{
// //             if(a%2==0)
// //             cout<<"even";
// //         }
// //         throw 0;
// //     }
// //     catch(int e)
// //     {
// //         throw;
// //     }
// // }
// // catch(int e)
// // {
// //     cout<<e<<"is not even";
// // }

// void fun(int *ptr, int x) 
// // throw(int *,int)
// {
//     if(ptr==NULL)
//     throw ptr;
//     if(x==0)
//     throw x;
// }
// int main(){

// #include<iostream>
// using namespace std;
// class Complex{
//     public:
//     int r1,i1,r2,i2,r3,i3;
//     Complex(){cin>>r1>>i1;cin>>r2>>i2;}
//     void addcomplex(){
//         r3=r1+r2;
//         i3=i1+i2;
//     }
//     void displaycomplex(){
//         cout<<r1<<"+"<<i1<<"i"<<endl;
//         cout<<r2<<"+"<<i2<<"i"<<endl;
//         cout<<r3<<"+"<<i3<<"i"<<endl;
//     }
// };
// int main(){
//     Complex calculate;
//    calculate.addcomplex();
//    calculate.displaycomplex();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class complex
// {
//     public:
//     int r1,r2,r3,i1,i2,i3;
//     void getnum()
//     {
//         cin>>r1>>i1;
//         cin>>r2>>i2;
//     }
//     void displaynum()
//     {
//         cout<<r1<<"+"<<i1<<"i"<<endl;
//         cout<<r2<<"+"<<i2<<"i"<<endl;
//         cout<<r1+r2<<"+"<<i1+i2<<"i"<<endl;

//     }
// };
// int main(){
//     complex c1;
//     c1.getnum();
//     c1.displaynum();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// template<typename t>
// t add(t num1,t num2)
// {
//     return(num1 + num2);
// } 
// int main()
// {
//     int result1;
//     float result2;
//     result1= add<int>(2,3);
//     cout<<result1<<endl;
//     result2=add<float>(2.278,3.3223);
//     cout<<result2<<endl;
//     return 0;
// }


// #include<vector>
// void getvec(vector<int> &v)
// {   public:
//     for (int i = 0; i < v.size ; i++)
//     {
//         cout<<"enter the numbers here: "<<endl;
//         cin>>v[i];
//     }
    
// };

// void dispvec(vector<int> &v)
// {   public:
//     for (int i = 0; i < v.size; i++)
//     {
//         cout<<i<<" no. is: "<<v[i]<<endl;
//     }
    
// }
// using namespace std;
 
// int main(){
//     vector<int> vec1;
//     getvec(vec1);
//     dispvec(vec1);
    
// #include<iostream>
// #include<conio.h>
// using namespace std;
// int main(){
//     int x,y,eligible=18;
//     cout<<"enter input"<<endl;
//     cin>>x;
//     try
//     {
//         if(x==18)
//         {
//            // throw eligible;
//             cout<<"u r eligible"<<endl;
//         }
//         else
//             throw (eligible);
//             //cout<<"you r not eligible "<<endl;
//     }
//     catch(int eligible)
//     {
//         cout<<"u r not eligible";
//     }
//     // catch(char eligible)
//     // {
//     //     cout<<"not eligible";
//     // }
    
    
//     return 0;
// }
//     {try{
//         fun(NULL,0);
//         fun(NULL,1);
//         int a=1,*p;
//         p=&a;
//         fun(p,1);
//         fun(p,0);}
//     catch(...)
//     {
//         cout<<"caught";
//     }
//     }
//  return 0;   
// }


// #include<iostream>
// #include<cmath>
// using namespace std;
// class base
// {
//     public:
//     int x,y;
//     void getinp()
//     {   
//         cout<<"enter first two numbers: "<<endl;
//         cin>>x>>y;
//     }
//     void dispinp()
//     {
//         cout<<"entered first value is: "<<x<<"\nentered second value is: "<<y<<endl;
//     }
// };
// int main()
// {
//     base b;
//     b.getinp();
//     b.dispinp();

// class cube
// {
//     public:
//     int s,vol;
//     cube()
//     {
//         cout<<"enter the value of side of cube: "<<endl;
//         cin>>s;
//         cout<<"the value of side of cube is: "<<s<<"volume of cube is: "<<(s*s*s)<<endl;
//     }
// };

// class num1
// {
//     public:
//     int num1;
//     void getnum1()
//     {
//         cout<<"enter the first number"<<endl;
//         cin>>num1;
//     }
    
// };
// class num2
// {
//     public:
//     int num2;
//     void getnum2()
//     {
//     cout<<"enter the second number"<<endl;
//     cin>>num2;
//     }
// };
// class add: public num1 , public num2
// {
//     public:
//     void sum()
//     {
//         cout<<"the sum of two numbers is: "<<num1+num2<<endl;
//     }
// };
// int main()
// {
//     add a;
//     num1 n1;
//     num2 n2;
//     n1.getnum1();
//     n2.getnum2();
//     a.sum();
//     return 0;
// }

// #include<iostream>
// using namespace std;
//     class Base1 
//     {
//     public:
//     Base1()
//     { cout << " Base1" << endl; }
//     }; 
//     class Base2 
//     {
//     public:
//     Base2()
//     { cout << "Base2" << endl; }
//     };
//     class Derived: public Base1, public Base2 
//     {
//     public:
//     Derived()
//     { cout << "Derived" << endl; }
//     }; 
// // 10/6/2022 C ,C++ and UML Basics 28
//     int main()
//     {
//     Derived d;
//     return 0;
//     }
