#include<bits\stdc++.h>
using namespace std;

int CountDigit(int n){
    int digit = 0;
    while (n>0)
    {
        digit++;
        n /= 10;

    }
    return digit;

}

int main(){
    // Count the number of digits in the given number n;
    int n;
    cin>>n;
    int digit = CountDigit(n);
    cout<<"In the "<<n<<" contain "<<digit<<endl;

    return 0;
}
