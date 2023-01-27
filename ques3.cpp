/*Write a program to swap two numbers.*/
// 1. using 3 variables
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cin>>num1>>num2;
    int num3;
    num3 = num1;
    num1 = num2;
    num2 = num3;
    cout<<num1<<" "<<num2<<endl;
    return 0;
}

// 2. using 2 varibales 
#include<bits/stdc++.h>

using namespace std;

int main(){
    // swap(num1,num2);
    int num1,num2;
    cin>>num1>>num2;
    num1 = num1+num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    return 0;
}
Footer