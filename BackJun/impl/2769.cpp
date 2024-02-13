#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// 두 입력식은 구분 되어 있지 않다
// C 언어 연산자 우선순위 따른다
// () ~ & ^ | -> 순서      

class Node:
    public:
        
         
        

int main(){
    int T;
    cin >> T;
    freopen("input.txt", "r", stdin);
    vector<char> alphabet;
    vector<char> expression;
    for(int i = 0; i<T ; i++){
        string s;
        cin >> s;
        for(int j = 0; j < s.size(); j++){
            if(find(alphabet.begin(), alphabet.end(), s[j]) != alphabet.end()){
                continue;
            }
            else if(s[j] >= 'A' && s[j] <= 'Z' || s[j] >= 'a' && s[j] <= 'z'){
                alphabet.push_back(s[j]);
            }else{
                expression.push_back(s[j]);
            }
        }
    }

    // printf("alphabet: ");
    // for(int i = 0; i < alphabet.size(); i++){
    //     printf("%c ", alphabet[i]);
    // }
    // printf("\n");
    // printf("expression: ");
    // for(int i = 0; i < expression.size(); i++){
    //     printf("%c ", expression[i]);
    // }

    cout << "a"&"b";
}