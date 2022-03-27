
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

#define stack_size 10
class my_stack
{
public:
    char a[stack_size];
    int top;


};

void push(my_stack *p,char value)
{
    if(p->top==stack_size)
    {
        cout<< "stack is full\n";
        return ;

    }

    p->a[p->top++]=value;

}


int pop(my_stack *p)
{
    if(p->top==0)
    {
        cout<< "stack is empty\n";
        return -1;
    }
    return p->a[--(p->top)];


}


int main()
{
    my_stack s;
    s.top=0;

    string str;
    cin>>str;
    int tmp=1;
    for (int i=0;i<str.size() ;i++ )
    {
        if(str[i]=='('||str[i]=='{' ||str[i]=='[' )
            {
                push(&s,str[i]);
            }
            else if(str[i]==')'||str[i]=='}' ||str[i]==']' )
            {
                char c=pop(&s);
                if(c=='(' && str[i]!=')' ||c=='[' && str[i]!=']' ||c=='{' && str[i]!='}' || c==-1)
                    {
                        tmp=0;
                        break;
                    }


            }


    }


if(tmp && s.top==0) cout<< " blanced" <<endl;
else cout<< "not blanced \n";


main();
}
