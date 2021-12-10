#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
}LNode, * link;

void create1(LNode* head);
LNode* create2();
void printLink(LNode* head);
int deleteNode(LNode* head, int num);
int insertNodeRear(LNode* head, int num, LNode* p);
int insertNodeFront(LNode* head, int num, LNode* p);
void create3(LNode* head);//头插法

int main() {
    // link p, r, head;
    LNode* head;
    // head = create2();
    head = (LNode*)malloc(sizeof(LNode));
    head->next = NULL;
    // create1(head);
    create3(head);
    printLink(head);

    //删除节点
    // int num;
    // printf("input delete num: ");
    // scanf("%d",&num);
    // if(deleteNode(head, num)){
    //     printf("SUCCESS...\n");
    //     printLink(head);
    // }
    // else{
    //     printf("NOT FOUND...\n");
    //     printLink(head);
    // }

    //插入节点
    // int loc;
    // LNode *p;
    // printf("input loc: ");
    // scanf("%d",&loc);
    // p = (LNode *)malloc(sizeof(LNode));
    // printf("insert data: ");
    // scanf("%d",&p->data);
    //值为xx后插入节点
    // if(insertNodeRear(head, loc, p)){
    //     printf("SUCCESS...\n");
    //     printLink(head);
    // }
    // else{
    //     printf("NOT FOUND...\n");
    //     printLink(head);
    // }
    //值为xx前插入节点
    // if(insertNodeFront(head, loc, p)){
    //     printf("SUCCESS...\n");
    //     printLink(head);
    // }
    // else{
    //     printf("NOT FOUND...\n");
    //     printLink(head);
    // }
    return 0;
}
void create1(LNode* head) {
    LNode* p, * r;
    r = head;
    while (1) {
        p = (LNode*)malloc(sizeof(LNode));
        printf("data: ");
        scanf("%d", &p->data);
        if (p->data == 0)
            break;
        r->next = p;
        r = p;//r = r->next;
    }
    r->next = NULL;
}
LNode* create2() {
    LNode* head, * p, * r;
    head = r = (LNode*)malloc(sizeof(LNode));
    head->next = NULL;
    while (1) {
        p = (LNode*)malloc(sizeof(LNode));
        printf("data: ");
        scanf("%d", &p->data);
        if (p->data == 0)
            break;
        r->next = p;
        r = p;//r = r->next;
    }
    r->next = NULL;
    return head;
}
void create3(LNode* head) {
    LNode* p;
    while (1) {
        p = (LNode*)malloc(sizeof(LNode));
        printf("data: ");
        scanf("%d", &p->data);
        if (p->data == 0)
            break;
        p->next = head->next;
        head->next = p;
    }
}

void printLink(LNode* head) {
    LNode* p = head->next;
    while (p) {
        printf("%d\n", p->data);
        p = p->next;
    }
}
int deleteNode(LNode* head, int num) {
    LNode* p = head, * r;
    while (p->next) {
        if (p->next->data == num) {
            r = p->next;
            p->next = p->next->next;
            free(r);
            return 1;
        }
        p = p->next;
    }
    return 0;
}

int insertNodeRear(LNode* head, int num, LNode* p) {
    LNode* q = head->next;
    while (q) {
        if (q->data == num) {
            p->next = q->next;
            q->next = p;
            return 1;
        }
        q = q->next;
    }
    return 0;
}
int insertNodeFront(LNode* head, int num, LNode* p) {
    LNode* q = head;
    while (q->next) {
        if (q->next->data == num) {
            p->next = q->next;
            q->next = p;
            return 1;
        }
        q = q->next;
    }
    return 0;
}