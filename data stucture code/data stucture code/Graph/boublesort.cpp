
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

void boublesort(int *a,int n)
 {
       for (int i=0; i<n;i++ )
       {
           for (int j=0; j<n-i-1;j++ )
              {

                  if(a[j+1]<a[j]) swap(a[j],a[j+1]);
              }

       }


 }

int main()
{
    int a[]={34,56,1,2,4,78,5,23,49,12,56,98};
    int n=12;
      for (int i=0; i<n;i++ )
        cout<<a[i]<<" ,";
        cout<<endl;
      boublesort(a,12);
        for (int i=0; i<n;i++ )
        cout<<a[i]<<" ,";
         cout<<endl;

return 0;
}
