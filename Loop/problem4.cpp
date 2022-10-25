#include<bits\stdc++.h>
using namespace std;

int Sum(int n){
    int ans = 0;
    for (int i = 0; i <= n; i++)
    {
        ans += i;
    }
    return ans;
}

int main(){
    // Find the sum of number upto n (following series)
    int n;
    cin>>n;
    cout<<"The sum number up to "<<n<<" is "<<Sum(n)<<endl;

    return 0;
}