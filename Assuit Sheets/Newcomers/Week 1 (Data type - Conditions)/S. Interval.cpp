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
    
      long double X;
      cin>>X;
      if(0.00<=X && X<=25.00){
          cout<<"Interval [0,25]";
      }
       else if(25.00<X&& X<=50.00) {
         cout<<"Interval (25,50]";
       }
       else if(75.00<X && X <=100.00) {
         cout<<"Interval (75,100]";
           
       }
          else if(50.00<X && X<=75.00) {
         cout<<"Interval (50,75]";
           
       }
       else
      cout<<"Out of Intervals";
  
    return 0;
}      
