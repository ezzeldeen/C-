#include <iostream>
#include <bitset>
using namespace std;

int func (int num)
{
    int s=0;
    for (int i=7;i>=0;i--)
    {
        if(!(num &(1<<i)) && s==0)
        {
            num= num |(1<<i);
        }
        else s=1;
    }
    return ~num;
}

int func2 (int num)
{
    int d=0, r=0;
    d = num /2;
    r = num%2;
    char result = 0xff <<(d+r);
    return (~(num | result));
}

int main()
{
    cout<< bitset<8>(5) << endl << bitset<8>(func(5));
    return 0;
}
