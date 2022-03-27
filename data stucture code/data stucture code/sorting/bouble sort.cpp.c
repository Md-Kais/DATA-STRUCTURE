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

bubble_sort(int *a,int n)
{

    for (int i=0; i<n;i++ )
        {

          for (int j=0;j<n-i-1 ;j++ )
          {
              if(a[j]>a[j+1])
                swap(a[j],a[j+1]);


          }

        }


}


int main()
{
    int a[]={3,12,78,34,88,45,34,67,90,123};

   bubble_sort(a,10);
    for (int i=0;i<10 ;i++)
    {
        cout<<a[i]<<", ";
    }

return 0;
}
