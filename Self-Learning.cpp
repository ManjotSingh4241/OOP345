// POINTERS//////////////////////////////////////////////

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

//Arrays and Pointers Arithmetic /////////////////////

#include<iostream>
using namespace std;

int main(){
    int marks[] = {23, 45, 56, 89};
    int mathmarks[4];
    mathmarks[0] = 2234;
    mathmarks[1]= 1234;
    mathmarks[2] = 456;
    mathmarks[3]= 7890;

    cout<<"These are marks:"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    marks[2] = 2345;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    cout<<"These are math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    for(int i = 0; i<4; i++){
        cout<<"The value of marks: "<<marks[i]<<endl;
        // To print the addresses of values in the array
        cout<<"The address of the values: "<<marks<<endl;
    }

    return 0;
}
