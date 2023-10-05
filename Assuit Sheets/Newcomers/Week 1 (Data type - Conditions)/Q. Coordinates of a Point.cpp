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
    
   double X,Y;
    cin>>X>>Y;
    if( (X>0) && (Y>0) ){
    cout<<"Q1";
    }
   else if(X<0 && Y>0){
    cout<<"Q2";
    }
      else if(X<0 && Y<0){
    cout<<"Q3";
    }
     else if(X>0 && Y<0){
    cout<<"Q4";
    }
 else if(X==0 && Y==0){
    cout<<"Origem";
    }
     else if(((X>0)||(X<0)) && (Y==0) ){
    cout<<"Eixo X";
     }
         else if((X==0) && ((Y>0)||Y<0)){
            
    cout<<"Eixo Y";
    }
      
    return 0;
}      
