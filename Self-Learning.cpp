// POINTERS///////////////////////////////////////////////////////////////////////////////////////////////////

// #include <iostream>
// using namespace std;

//     int main()
//     {
//         int a = 3;
//         int* b= &a;
//         cout<<"The address of a is: "<<&a<<endl;//to get the value of any integer write &
//         cout<<"The address of a is: "<<b<<endl;
//         cout<<"The value of b is: "<<*b<<endl;//to get the value stored in the referencing operator

//         int** c = &b; //To store the address of the pointer write **
//         cout<<"The adress of pointer &b: "<< c<<endl;
//         cout<<"The adress of pointer &b: "<<&b<< c<<endl;
//         cout<<"The value at address c is: "<<*c<<endl;

//         return 0;
//     }

// Arrays and Pointers Arithmetic ////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// int main(){
//     int marks[] = {23, 45, 56, 89};
//     int mathmarks[4];
//     mathmarks[0] = 2234;
//     mathmarks[1]= 1234;
//     mathmarks[2] = 456;
//     mathmarks[3]= 7890;

//     cout<<"These are marks:"<<endl;
//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;
//     marks[2] = 2345;
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;

//     cout<<"These are math marks"<<endl;
//     cout<<mathmarks[0]<<endl;
//     cout<<mathmarks[1]<<endl;
//     cout<<mathmarks[2]<<endl;
//     cout<<mathmarks[3]<<endl;

//     for(int i = 0; i<4; i++){
//         cout<<"The value of marks: "<<marks[i]<<endl;
//         // To print the addresses of values in the array
//         cout<<"The address of the values: "<<marks<<endl;
//     }

//     return 0;
// }

// Tempalates //////////////////////////////////////////////////////////////

// #include <iostream>

// using namespace std;

// template <class t>
// class vector{
//      public:
//      t * arr;
//      int size;
//      vector(int m){
//         size = m;
//         arr = new t[size];
//      }
//      t dotProduct(vector &v){
//         int d = 0;
//         for (int i = 0; i<size; i++){
//             d+= this->arr[i] * v.arr[i];
//         }
//         return d;
//      }
// };

// int main()
// {
//     vector <float>v1(3);
//     v1.arr[0] = 4.3;
//     v1.arr[1] = 3.2;
//     v1.arr[2] = 1.1;
//     vector <float>v2(3);
//     v2.arr[0] = 2.4;
//     v2.arr[1] = 5.7;
//     v2.arr[2] = 8.2;
//     int a = v1.dotProduct(v2);
//     cout<<a<<endl;
//     return 0;
// }
////Templayes with multiple parameters
// #include<iostream>
// using namespace std;

// template<class t1, class t2>
// class myClass{
//     public:
//     t1 data1;
//     t2 data2;

//     myClass(t1 a, t2 b){
//         data1 = a;
//         data2 = b;
//     }
//     void display(){
//         cout<<this->data1<<this->data2;
//     }
// };

// int main(){
//     myClass<int, char>obj(1, 'c');
//     obj.display();
//     return 0;
// }

///Templates with default parameters///

// #include <iostream>
// using namespace std;

// template<class t1=int, class t2=float>

// class Manjot{
//     public:
//     t1 a;
//     t2 b;
//     Manjot(t1 x, t2 y){
//         a=x;
//         b=y;
//     }

//     void display(){
//         cout<<"The value of a: "<<a<<endl;
//         cout<<"The value of b: "<<b<<endl;
//     };
// };

// int main(){
//     Manjot<> h(4, 6.4);
//     h.display();

//     return 0;
// }

///Template function with parameters///

// #include<iostream>
// using namespace std;

// float funcAverage(int a, int b){
//     float avg = (a+b)/2;
//     return avg;
// }
//  float funcAverage2(int a, float b){
//     float avg = (a+b)/2;
//     return avg;
// }

// template <class t1, class t2>
// float funcAverage2(t1 a, t2 b){
//     float avg = (a+b)/2;
//     return avg;
// }

// int main(){
//     float a;
//     a = funcAverage2(5, 2.4);
//     cout<<"Average: "<<a<<endl;
//     return 0;
// }

///////////////STL///////////////////////////////

 