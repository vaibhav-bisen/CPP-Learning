#include<bits\stdc++.h>
using namespace std;

int Reverse(int n){
    int rev = 0;
    while (n>0)
    {
        int lastDigit = n%10;
        rev = rev*10 +lastDigit;
        n /=10;
    }
    return rev;
}

int main(){
    // Reverse the digits of a number
    int n;
    cin>>n;
    cout<<"The given digit "<<n<<" reverse "<<Reverse(n)<<endl;

    return 0;
}