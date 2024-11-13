// 4.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name;\n";
    cin>> name;
    cout << "Enter your favorite dessert;\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you," << name << " .\n";

    return 0;
}


