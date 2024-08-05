#include <iostream>

int main() {
    char name[30];
    char department;
    int test1, test2;
    float average;

    printf("Please input your name...");
    scanf("%s", &name);
    printf("Please select your department...(a:CS b:Bio c:Math)");

    getchar();

    scanf("%c", &department);
    printf("Please input your score on test 1...");
    scanf("%d", &test1);
    printf("Please input your score on test 2...");
    scanf("%d", &test2);

    average = float(test1 + test2) / 2;

    //輸出部分
    printf("+-----------------+------------+--------+--------+---------+\n");
    printf("|       Name      | Department | Test 1 | Test 2 | Aversge |\n");
    printf("+-----------------+------------+--------+--------+---------+\n");

    //使用printf來格式化輸出%20 讓字符保留20個位置
    printf("|%17s|%12c|%8d|%8d|%9f|\n", name, department, test1, test2, average);

    printf("+-----------------+------------+--------+--------+---------+\n");

    return 0;
} 