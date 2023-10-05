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
    
     	 long long A,B,C,D;
         cin>>A>>B>>C>>D;
         long long m = (A%100*B%100*C%100*D%100)%100;     //if we solve it naively, we are gonna faced overflow, it is called math overflow
         
        if(m<10) cout<<0<<m;
        else cout<<(m);
      
    return 0;
}      
