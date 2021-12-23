#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

// ��������Ľڵ�
struct Node {
    int data;
    struct Node* next;
};

// ����ͷ�ڵ�
struct Node* head;
// ����β�ڵ�
struct Node* tail;
int main() {
    // ��ʼ��
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
// ��ӡ�����������нڵ�
void print() {
    struct Node* cur = head->next;
    while (cur) {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    printf("\n");
}

// ��̬����һ���ڵ㵽�����У�β�巨
void insert(int data) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    if (n) {
        n->next = NULL;
        n->data = data;

        tail->next = n;
        tail = tail->next;
    }
    else {
        printf("��̬�ڵ����ʧ�ܣ�");
        exit(-1);
    }
}




// ɾ������ڵ�
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

// ���ҽڵ�
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

// �޸Ľڵ�ֵ
void modify(int oData, int nData) {
    struct Node* f = find(oData);
    if (f) {
        f->data = nData;
    }
}

// ��������
void destroy() {
    struct Node* cur = head->next;
    while (cur) {
        struct Node* n = cur;
        cur = cur->next;
        free(n);
    }
    head->next = NULL;
}

// ��������Ľڵ���
int count() {
    int cnt = 0;
    struct Node* cur = head->next;
    while (cur) {
        cnt++;
        cur = cur->next;
    }
    return cnt;
}

