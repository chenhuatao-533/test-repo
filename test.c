// 这是用来模拟远程仓库推送自己提交时候，其他人也正在提交，解决冲突。
#include <stdio.h>

int main()
{
    printf("This is message for master.\n"); // 这条代码是在master分支上写的。
    printf("This is message for me.\n");     // 这是在me分支上写的。
    return 0;
}