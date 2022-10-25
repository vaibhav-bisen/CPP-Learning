#include<bits\stdc++.h>
using namespace std;

int Power(int a, int b){
    int ans = 1;
    for(int i=1; i<=b; i++){
        ans *= a;
    }
    return ans;
}

int main(){
    // Given 2 number a and b. Find a^b.
    int a, b;
    cout<<"Base number: ";
    cin>>a;
    cout<<"Power: ";
    cin>>b;
    cout<<a<<" to the power "<<b<<" is "<<Power(a,b)<<endl;

    return 0;
}