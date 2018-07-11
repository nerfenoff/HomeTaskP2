#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int task1(double number,int k)
{
    int result = 0;

    int temp = 0;
    for(int i = 0; i < k;++i)
    {
        temp = (modf(number,NULL)* 10);
        if(temp == 9) ++result;
        number *= 10;
    }
    return result;
}

int task2(double number, int k)
{
    int result = 0;
    for(int i = 0; i < k;++i)
    {
        result += (modf(number,NULL)* 10);
        number *= 10;
    }
    return result;
}

bool task3(double number, int k)
{
    int sum1 = 0;
    int sum2 = 0;
    int n = 0;
    cout << "input n: ";
    cin >> n;
    for(int i = 0; i < k+n;++i)
    {
        if(i >= k) sum2 += (modf(number,NULL) * 10);
        else sum1 += (modf(number,NULL) * 10);
        number *= 10;
    }
    cout << sum1 << "  " << sum2 << endl;
    return (sum1 == sum2);
}

bool task4(double number, int k)
{
    int digit = 0;
    int sum = 0;

    int n = 0;
    cout << "input n: ";
    cin >> n;

    for(int i = 0; i < k+n;++i)
    {
        if(i == k) digit = (modf(number,NULL)* 10);
        if(i > k) sum += (modf(number,NULL)* 10);
        number *= 10;
    }
    return (sum == digit);
}

int task5(double number, int k)
{
    int digit = 0;
    int sum = 0;

    for(int i = 0; i < k;++i)
    {
        if(i == k-1) digit = (modf(number,NULL)* 10);
        if(i < k-1) sum += (modf(number,NULL)* 10);
        number *= 10;
    }
    cout << digit << "  " << sum << endl;
    return (sum == digit);
}


int task6(double number, int k)
{
    int sum = 0;

    int n = 0;
    cout << "input n: ";
    cin >> n;

    for(int i = 0; i < k+n;++i)
    {
        if(i >= n) sum += (modf(number,NULL)* 10);
        number *= 10;
    }
    return sum;
}

int task7(double number, int k)
{
    int sum1 = 0;
    int sum2 = 0;
    double temp = 0;
    modf(number,&temp);

    for(int i = 0; i < k;++i)
    {
        sum1 += (modf(number,NULL) * 10);
        number *= 10;
    }

    while((int)temp)
    {
        sum2 += (int)temp % 10;
        temp /= 10;
    }
    cout << sum1 << "  " << sum2 << endl;
    return (sum1 == sum2);
}

void task8(double number, int k)
{
    int n = 0;
    cout << "input n: ";
    cin >> n;

    for(int i = 0; i < k+n;++i)
    {
        if(i >= n)
        cout << (int)(modf(number,NULL)* 10) << " ";
        number *= 10;
    }
    cout << endl;
}

bool task9(double number, int k)
{
    vector<int> digits;
    for(int i = 0; i < k;++i)
    {
        digits.push_back((modf(number,NULL)* 10));
        number *= 10;
    }

    for(unsigned int i = 0; i < digits.size(); ++i)
        for(unsigned int j = 1 + i; j < digits.size(); ++j)
            if(digits[i] == digits[j]) return false;

    return true;
}

bool task10(double number, int k)
{
    vector<int> digits;
    for(int i = 0; i < k;++i)
    {
        digits.push_back((modf(number,NULL)* 10));
        number *= 10;
    }

    for(unsigned int i = 0; i < digits.size(); ++i)
        if(digits[0] != digits[i]) return false;

    return true;
}

bool task11(double number, int k)
{
    if(k == 1) return true;

    bool result1 = true;
    bool result2 = true;

    vector<int> digits;
    for(int i = 0; i < k;++i)
    {
        digits.push_back((modf(number,NULL)* 10));
        number *= 10;
    }

    for(unsigned int i = 0; i < digits.size()-1;++i)
    {
        if(digits[i] < digits[i+1]) result1 = false;
        else if(digits[i] > digits[i+1]) result2 = false;
    }
    return (result1 || result2);
}

bool task12(double number, int k)
{
    if(k == 1) return true;

    vector<int> digits;
    for(int i = 0; i < k;++i)
    {
        digits.push_back((modf(number,NULL)* 10));
        number *= 10;
    }
    int n = digits[1] - digits[0];
    for(unsigned int i = 0; i < digits.size()-1;++i)
    {
        if(digits[i+1] != (digits[i]+n)) return false;
    }
    return true;
}
