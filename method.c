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

// ��̬����һ���ڵ㵽�����У�β�巨
void insert(int data) {
    struct Node* n = (struct Node*)malloc(1 * sizeof(struct Node));
    if (n) {
        // �½��ڵ�
        n->data = data;
        n->next = NULL;

        // ���½��Ľڵ�ӵ�����β��
        tail->next = n;
        // β�������ƶ�
//        tail = n;
        tail = tail->next;
    }
    else {
        printf("��̬����ڵ��ڴ�ʧ��!!!\n");
        exit(-1);
    }
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