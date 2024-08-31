#include<iostream>
using namespace std;

int main() {
    //pattern pratice
    int n, row;
    cout<<"Enter number you want print"<<endl;
    cin>>n;
    cout<<"Enter number of row"<<endl;
    cin>>row;

    for(int i = 0 ;i<row;i++){
        for(int j= 0;j<n;j++){
            if(i==0 ||i==row-1){
                cout<<"*";
            }
            else{
                if(i==j+1 || j==n-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }

        }
        cout<<endl;
    }


    // int n , row;
    // cout<<"Enter any number"<<endl;
    // cin>>n;
    // cout<<"Enter how many rows you want"<<endl;
    // cin>>row;

    // for(int i = 0;i< row;i++){
    //     for(int j = 0;j<n;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }


    
    //prime number
    // int num;
    // int flag = 1;
    // cout<<"Enter number you want to check prime"<<endl;
    // cin>>num;
    // for(int i = 2;i<num;i++){
    //     if(num % i==0){
    //         flag= 0;
    //     }
    // }
    // if(flag == 1){
    //     cout<<"number is prime";
    // }
    // else{
    //     cout<<"number is not prime";
    // }


    //Factorial of number
    // int n, fact = 1;
    // cout<<"Enter number you want"<<endl;
    // cin>>n;
    // for(int i = 1;i<=n;i++){
    //     fact = fact  * i;
    // }
    // cout<<"Factorial of number "<<fact;


    //print 1 to n but only odd NO.
    // int num ;
    // cout<<"Enter number you want"<<endl;
    // cin>>num;
    // for(int i = 1;i<=num;i++){
    //     if(i%2 !=0){
    //         cout<<i<<" ";
    //     }
    // }


    //Add n numbers
    // int num, sum =0;
    // cout<<"Enter number you want"<<endl;
    // cin>>num;
    // for(int i=1;i<=num;i++){
    //     sum = sum + i;
    // }
    // cout<<"Sum of n numbers"<<sum;



    //count from 1 to n
    // int n;
    // cout<<"Enter number you want"<<endl;
    // cin>>n;
    // for(int i =1;i<=n;i++){
    //     cout<<i;
    // }


    //check negative or positive
    // int num;
    // cout<<"Enter number you want"<<endl;
    // cin>>num;
    // if(num>0){
    //     cout<<"number is postive";
    // }
    // else{
    //     cout<<"number is negative";
    // }

    //clculate percentage
    // int num;
    // cout<<"Enter you number you obtained in exam"<<endl;
    // cin>>num;
    // if(num>=90){
    //     cout<<"A+ Grade";
    // }
    // else if(num>=85){
    //     cout<<"A Grade";
    // }
    // else if(num>=70){
    //     cout<<"B Grade";
    // }
    // else if(num>60){
    //     cout<<"C Grade";
    // }
    // else if(num>40){
    //     cout<<"D Grade";
    // }
    // else{
    //     cout<<"fail";
    // }
    


    //find odd or even number 
    // int n;
    // cout<<"Enter that number you want to check "<<endl;
    // cin>>n;
    // if(n%2==0){
    //     cout<<"number is even";
    // }
    // else{
    //     cout<<"number is odd";
    // }
   
    //add two number 
    // int n1, n2, sum;
    // cout<<"Enter two number"<<endl;
    // cin>>n1>>n2;
    // sum = n1 + n2;
    // cout<<"Sum of two number is"<<sum;

    return 0;
}