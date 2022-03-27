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
void insertion_sort(int *a,int n)
{
    for (int i=1; i<n;i++ )
       {
          int tmp =a[i];
          int j=i-1;
          while(j>=0 && a[j]>tmp)
          {

              a[j+1]=a[j];
              j--;

          }

          a[++j] =tmp;
       }


}

 void displas(int *a,int n)
 {
     for (int i=0; i<n;i++ )



         cout << a[i] << ",";

      cout<<endl;

 }

int main()
{
   int a[20]={12,34,1,2,8,56,83};
   int array_size=7;
   displas(a,array_size);
   insertion_sort(a,array_size) ;
   displas(a,array_size);




return 0;
}
