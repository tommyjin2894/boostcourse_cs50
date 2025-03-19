#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
} node;

bool search(node *tree);

int main() {
    // 테스트를 위한 이진 탐색 트리 생성 (값 50 포함)
    node *root = malloc(sizeof(node));
    root->number = 40;
    root->left = malloc(sizeof(node));
    root->left->number = 20;
    root->right = malloc(sizeof(node));
    root->right->number = 60;
    root->left->left = malloc(sizeof(node));
    root->left->left->number = 10;
    root->left->right = malloc(sizeof(node));
    root->left->right->number = 30;
    root->right->left = malloc(sizeof(node));
    root->right->left->number = 50;
    root->right->right = malloc(sizeof(node));
    root->right->right->number = 70;
    root->left->left->left = NULL;
    root->left->left->right = NULL;
    root->left->right->left = NULL;
    root->left->right->right = NULL;
    root->right->left->left = NULL;
    root->right->left->right = NULL;
    root->right->right->left = NULL;
    root->right->right->right = NULL;

    if (search(root)) {
        printf("found 50");
    } else {
        printf("can not find 50");
    }
}

/* 함수 정의 */
bool search(node *tree)
{
    if (tree == NULL) {
        printf("현재 노드 : %i \n", tree->number);
        return false;
    } else if (50 < tree->number) {
        printf("현재 노드 : %i \n", tree->number);
        return search(tree->left);
    } else if (50 > tree->number) {
        printf("현재 노드 : %i \n", tree->number);
        return search(tree->right);
    } else {
        printf("현재 노드 : %i 찾았다! \n", tree->number);
        return true;
    }
}