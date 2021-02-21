#include <iostream>
using namespace std;
// series - 1 1 2 3 5 8 13 21 ...

int main()
{
    int lastNum{200};
    int num{1}, prevNum{0}, nextNum{0};
    
    while (1)
    {
        nextNum = num + prevNum;
        
        if(nextNum > lastNum)
            break;
        
        cout << nextNum << " ";
        prevNum = num;
        num = nextNum;
    }
}


