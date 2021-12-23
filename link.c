#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

// 定义链表的节点
struct Node {
    int data;
    struct Node* next;
};

// 定义头节点
struct Node* head;
// 定义尾节点
struct Node* tail;
int main() {
    // 初始化
    struct Node vHead = { -1, NULL };
    head = &vHead;
    tail = head;

    insert(5);
    insert(4);
    insert(3);
    print();
    delete(4);
    modify(4, 6);
    destroy();
    print();
    return 0;
}
// 打印整个链表所有节点
void print() {
    struct Node* cur = head->next;
    while (cur) {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    printf("\n");
}

// 动态插入一个节点到链表中，尾插法
void insert(int data) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    if (n) {
        n->next = NULL;
        n->data = data;

        tail->next = n;
        tail = tail->next;
    }
    else {
        printf("动态节点分配失败！");
        exit(-1);
    }
}




// 删除链表节点
void delete(int data) {
    struct Node* cur = head->next;
    struct Node* last = head;
    while (cur) {
        if (cur->data == data) {
            last->next = cur->next;
            cur->next = NULL;
            free(cur);
            break;
        }
        cur = cur->next;
        last = last->next;
    }
}

// 查找节点
struct Node* find(int data) {
    struct Node* cur = head->next;
    while (cur != NULL) {
        if (cur->data == data) {
            return cur;
        }
        cur = cur->next;
    }
    return NULL;
}

// 修改节点值
void modify(int oData, int nData) {
    struct Node* f = find(oData);
    if (f) {
        f->data = nData;
    }
}

// 销毁链表
void destroy() {
    struct Node* cur = head->next;
    while (cur) {
        struct Node* n = cur;
        cur = cur->next;
        free(n);
    }
    head->next = NULL;
}

// 返回链表的节点数
int count() {
    int cnt = 0;
    struct Node* cur = head->next;
    while (cur) {
        cnt++;
        cur = cur->next;
    }
    return cnt;
}

