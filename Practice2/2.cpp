/*
This problem is from: 
https://programmers.co.kr/learn/courses/30/lessons/72410#

2021 Kakao Blind Recruitment
신규 아이디 추천
*/

#include <string>
#include <vector>
#include <iostream>

using namespace std;

/*
// 1단계
string toLower(string new_id) {
    for (auto i : new_id) {
        if(i >=65 && i <=90) {
            i = i + 32;
        }
    }
    return new_id;
}

// 2단계
string del(string new_id) {
    string answer = "";
    for (auto i : new_id) {
        if(i >= 97 || i <= 122 || i == 45 || i == 46 || i == 95) {
            answer.push_back(i);
        } 
    }
    return answer;
}

// 3단계
string doubleComma(string new_id) {
    string answer = "";
    for (auto i : new_id) {
        if(i == 46 && answer.back() == 46) {
            continue;
        } else {
            answer.push_back(i);
        }
    }
    return answer;
}

// 4단계
string removeComma(string new_id) {
    string answer = "";

    if (new_id.front() == 46) {
        new_id = new_id.substr(1, new_id.length() - 1);
    }

    if (new_id.back() == 46) {
        new_id = new_id.substr(0, new_id.length() - 2);
    }
    return new_id;
}

// 5단계
string emptyStr(string new_id) {
    if(new_id.empty()) {
        new_id = "a";
    }
    return new_id;
}

// 6단계
string longLengthStr(string new_id) {
    string answer ="";
    if (new_id.length() > 16) {
        answer = new_id.substr(0, 14);
    }

    if (answer.back() = 46) {
        answer.pop_back();
    }
    return answer;
}

// 7단계
string shortLengthStr(string new_id) {
    string answer = "";

    while (new_id.length() < 3) {
        new_id = new_id + new_id.back();
    }
    return new_id;
}
*/

string solution(string new_id)
{
    string answer = "";
    string temp = "";

    // Stage 1
    for (int i = 0; i < new_id.length(); i++)
    {
        if (new_id[i] >= 65 && new_id[i] <= 90)
        {
            new_id[i] = new_id[i] + 32;
        }
    }

    // Stage 2
    for (auto i : new_id)
    {
        if ((i >= 'a' && i <= 'z') || ('0' <= i && i <= '9') || i == '-' || i == '_' || i == '.')
        {
            answer.push_back(i);
        }
    }
    new_id = answer;

    // Stage 3
    answer = "";
    for (auto i : new_id)
    {
        if (i == 46 && answer.back() == 46)
        {
            continue;
        }
        else
        {
            answer.push_back(i);
        }
    }
    new_id = answer;

    // Stage 4
    answer = "";
    if (new_id.front() == '.')
    {
        new_id = new_id.substr(1, new_id.length() - 1);
    }

    if (new_id.back() == '.')
    {
        new_id = new_id.substr(0, new_id.length() - 1);
    }
    answer = new_id;

    // Stage 5
    if (new_id.empty())
    {
        new_id = "a";
    }

    answer = new_id;
    cout << "answer: " << answer << endl;

    // Stage 6
    if (new_id.length() >= 16)
    {
        new_id = new_id.substr(0, 15);
    }

    cout << "new_id: " << new_id << endl;

    if (new_id.back() == '.')
    {
        new_id.pop_back();
    }

    cout << new_id << endl;

    answer = new_id;

    // Stage 7
    while (new_id.length() < 3)
    {
        new_id = new_id + new_id.back();
    }

    answer = new_id;

    return answer;
}
