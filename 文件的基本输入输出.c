#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    
    
    // 1. 写入文件
    fp = fopen("test1.txt", "w");
    if (fp == NULL) {
        perror("文件打开失败");
        return -1;
    }
    // 向文件传一个字符
    fputc ('a', fp); 

    // 向文件传入一个字符串
    char arr[255] = {0}; 
    scanf("%s", arr); 
    fputs(arr, fp); 

    // 传入26个英文字母
    char ch = 'a'; 
    while (ch <= 'z') {
        fputc(ch, fp); 
        ch++; 
    }
   

    fclose(fp);

    // 2. 读取文件
    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        perror("文件打开失败");
        return -1;
    }

    printf("读取文件内容：\n");
    // while (fgets(arr, 255, fp) != NULL) {
    //     printf("%s", arr);
    // }

    // 读出文件
    // 创建一个字符数组来存储读出的文件
    char str[8] = {0}; 


    // while (fgets(str, 4, fp) != NULL) {
    //     printf("%s\n", str); 
    // }


    fgets(str, 5, fp); 
    printf("%s", str); 

    
    // 检查是否因错误结束
    if (ferror(fp)) {
        perror("读取文件时发生错误");
    }
    // 检查是否正常到达文件末尾
    if (feof(fp)) {
        printf("\n已到达文件末尾。\n");
    }

    fclose(fp);
    return 0;
}