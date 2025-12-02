#include<stdio.h>

// 创建结构体类型
struct ListNode {
    int data; 
    struct ListNode* next;  
}; 
// 创建链表节点
// 尾插
struct ListNode* createNode(struct ListNode* head, int data) {
    struct ListNode* newNode = malloc(sizeof(struct ListNode)); 
    if (newNode == NULL) {
        return head; 
    }
    newNode->data = data; 
    head->next = newNode;
    return head;  
}


int main() {

    FILE* pf = fopen("text2.txt", "w"); 
    if (pf == NULL) {
        perror("fopen"); 
        return -1; 
    } 
    // 文件打开成功
    // 将数组写入文件 


    // 创建一个数组
    int arr[45] = {0}; 
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]); 
    } 
    fprintf(pf, "开始写入\n"); 
    for (int i = 0; i < 5; i++) {
        fprintf(pf, "%d ", arr[i]); 
    }
    fprintf(pf, "\n成功将数组读入文件"); 

    
    //  将链表写入文件




    // 关闭文件
    fclose(pf); 
    pf = NULL; 
    return 0; 
}