#include <iostream>
using namespace std;
static int ttime = 0;
int root(int n){
    int k = 2;
    int ans = -1;
    while((k*k) <= n){
        ttime++;
        if(n%(k*k) == 0){
            if(ans==-1)ans = k;
            else ans *= k;
            n /= (k*k);
        }else{
            k++;
        }
    }
    return ans==-1?k-1:ans;
}
int main(){
    int n = 99;
    int ans = root(n);
    cout<<"The square root of "<<n<<" is : "<<ans<<endl;
    cout<<ttime<<endl;
    return 0;
}