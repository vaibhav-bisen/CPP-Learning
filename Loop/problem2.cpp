#include<bits\stdc++.h>
using namespace std;

int Sum(int n){
    int sum = 0;
    while (n>0)
    {
        int lastDigit = n%10;
        sum = sum + lastDigit;
        n /= 10;
    }
    return sum;
}

int main(){
    // Find the sum of given number
    int n;
    cin>>n;
    cout<<"Sum of the "<<n<<" is "<<Sum(n)<<endl;

    return 0;
}