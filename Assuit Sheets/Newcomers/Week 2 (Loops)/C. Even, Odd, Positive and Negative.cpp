#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <array>
#include <climits>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <string.h>
#include <cstdint> 
using namespace std;

#define HeartAttack ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define oo 1e9
#define forr(i,n) for(int i=0; i < n; i++)
/*const int N = 100;
int arr[N];
*/
int main() {
    HeartAttack
    
    int n,num,cnteven=0,cntodd=0,cntpos=0,cntneg=0; cin>>n;
    while(n--){
        cin>>num;
        if(num%2==0)cnteven++;
        else if(num%2!=0)cntodd++;
        if(num>0)cntpos++;
        else if(num<0)cntneg++;
      } 
       cout<<"Even: "<<cnteven<<"\n";
       cout<<"Odd: "<<cntodd<<"\n";
       cout<<"Positive: "<<cntpos<<"\n";
       cout<<"Negative: "<<cntneg<<"\n";
    
      
    return 0;
}      
