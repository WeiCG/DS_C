#ifndef ARRAYLIST_H
#define ARRAYLIST_H

/**
 * 动态数组头文件
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * 功能性函数
 */
inline size_t size();            // 返回元素的个数
bool isEmpty();                  // 是否为空
bool contains(int element);      // 是否包含某个元素
bool clear();                    // 清空动态数组

/**
 * 操作元素
 */
void add(int element);                   // 在动态数组末尾添加一个方法
void insert(int index, int element);     // 将元素插入指定的位置
int get(int index);                      // 根据索引从动态数组中获取元素
int set(int index, int element);         // 根据索引修改动态数组中元素的值


#endif