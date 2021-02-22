#include <iostream>
using namespace std;
// series - 1 1 2 3 5 8 13 21 ...

int main()
{
    int lastNum{200};
    int num{1};
    int prevNum{0};
    int nextNum{0};
    
    cout << "Input Last Number : ";
    cin >> lastNum;
        
    cout << "0 1 ";
    while (1)
    {
        nextNum = num + prevNum;
        
        if(nextNum > lastNum)
            break;
        
        cout << nextNum << " ";
        prevNum = num;
        num = nextNum;
    }
    return 0;
}


