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

// 动态插入一个节点到链表中，尾插法
void insert(int data) {
    struct Node* n = (struct Node*)malloc(1 * sizeof(struct Node));
    if (n) {
        // 新建节点
        n->data = data;
        n->next = NULL;

        // 把新建的节点接到链表尾部
        tail->next = n;
        // 尾结点向后移动
//        tail = n;
        tail = tail->next;
    }
    else {
        printf("动态分配节点内存失败!!!\n");
        exit(-1);
    }
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