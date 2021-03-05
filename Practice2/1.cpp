/*
This problem is from:
https://programmers.co.kr/learn/courses/30/lessons/64061

2019 카카오 개발자 겨울 인턴십
크레인 인형뽑기 게임
*/

#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;

    int move, temp;
    stack<int> box;

    for (int i = 0; i < moves.size(); i++) {
        move = moves[i] - 1;
        if(board[board.size() - 1][move] != 0) {
            for (int j = 0; j < board.size(); j++) {
                if (board[j][move] != 0) {
                    temp = board[j][move];        
                    board[j][move] = 0;
                    break;
                }
            }
            if( !box.empty() && temp == box.top()) {
                box.pop();
                answer += 2;
            } else if (temp != -1) {
                box.push(temp);
            }
        }
    }
    return answer;
}