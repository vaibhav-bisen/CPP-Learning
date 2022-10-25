#include<bits\stdc++.h>
using namespace std;

int Factorial(int n){
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}

int main(){
    // Print nth factorial number
    int n;
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<Factorial(n)<<endl;

    return 0;
}