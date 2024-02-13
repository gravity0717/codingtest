//https://www.acmicpc.net/problem/1991
// Date: 2021/07/11
// Ref: https://www.acmicpc.net/source/24798291
// 문제: 트리 순회
// Idea: 트리를 구현한 후 전위, 중위, 후위 순회를 구현한다.
/***/
#include<iostream>
#include<map>
using namespace std;

class Tree {
public:
    char data;
    Tree* left;
    Tree* right;
    Tree(char data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }        
};

void preorder(Tree* node) {
    if(node == NULL) return;
    cout << node->data;
    preorder(node->left);
    preorder(node->right);
}

void inorder(Tree* node) {
    if(node == NULL) return;
    inorder(node->left);
    cout << node->data;
    inorder(node->right);
}

void postorder(Tree* node) {
    if(node == NULL) return;
    postorder(node->left);
    postorder(node->right);
    cout << node->data;
}

int main() {
    // freopen("input.txt", "r", stdin);
    int N;
    cin >> N;

    map<char, Tree*> treeMap;
    for (int i = 0; i < N; i++) {
        char data, left, right;
        cin >> data >> left >> right;

        if(treeMap.find(data) == treeMap.end()) {
            treeMap[data] = new Tree(data);
        }
        if(left != '.') {
            treeMap[left] = new Tree(left);
            treeMap[data]->left = treeMap[left];
        }
        if(right != '.') {
            treeMap[right] = new Tree(right);
            treeMap[data]->right = treeMap[right];
        }
    }

    Tree* root = treeMap.begin()->second;

    preorder(root);
    cout << "\n";
    inorder(root);
    cout << "\n";
    postorder(root);
    cout << "\n";

    return 0;
}
