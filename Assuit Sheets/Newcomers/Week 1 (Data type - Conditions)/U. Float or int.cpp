#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <array>
#include <climits>
#include <cstdlib>
#include <iomanip> // for setprecision
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
    
     	float N;
 
     	cin >> N;
 
    	if (floor(N) == ceil(N))
              cout << "int "<<N;
 
    	else
 
    	cout << "float "<<int(N) <<" "<<fixed<< setprecision(3)<<N - (long)N;
 
      
    return 0;
}      
