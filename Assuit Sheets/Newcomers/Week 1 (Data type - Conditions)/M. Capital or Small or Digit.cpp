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
    
    char X;
    cin>>X;
    
    if (X>=65 && X<=90)  
        cout<<"ALPHA"<<endl<<"IS CAPITAL";                  
 
    else if (X>=97 && X<=122)  
     cout<<"ALPHA"<<endl<<"IS SMALL";   
    else if(X>=48 && X<=57)
     cout<<"IS DIGIT"; 
      
    return 0;
}      
