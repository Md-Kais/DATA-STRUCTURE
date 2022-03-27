#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;


const double PI = acos(-1);


#define PB push_back
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (abs(a*b)/gcd(a,b))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void  bsearch(int *a,int array_size,int value)
  {
      int l=0,r=array_size-1;
      int m=(l+r)/2;
      while(l<=r)
      {
          if(a[m]==value)
          {
              cout<<"find in position "<<m<<endl;
              return;

          }
          if(a[m]<value)
          {
              l=m+1;

          }
          else{
            r=m-1;
          }
          m=(l+r)/2;

      }

      cout<<"not find "<<endl;

  }

int main()
{
    int a[]={3,5,7,12,13,45,56,89,100};
    int value;
    cin>>value;
    bsearch(a,9,value);



main();
}
