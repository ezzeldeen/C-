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


int main()
{
    cout<< bitset<8>(5) << endl << bitset<8>(func(5));
    return 0;
}
