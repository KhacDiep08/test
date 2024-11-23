#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <sstream>
#include <vector>

using namespace std;

struct call {
    string from_number;
    string to_number;
    string date;
    string from_time;
    string end_time;
};

string concac;

vector<call> dt;

void input()
{
    string s;
    while(true)
    {
        getline(cin, s);
        if(s == "#")
        {
            break;
        }
        else
        {
            stringstream ss(s);
            call cc;
            ss >> concac >> cc.from_number >> cc.to_number >> cc.date >> cc.from_time >> cc.end_time;
            dt.push_back(cc);
        }
    }
}
int main() {
    input();
    for(const auto& x : dt)
    {
        cout <<  call.from_number << call.to_number << call.date << call.from_time << call.end_time;
        cout << endl;
    }
    return 0;
}
