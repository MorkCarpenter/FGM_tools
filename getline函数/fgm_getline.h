#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
    该函数将一直读取输入一直到回车
    该函数共有三个参数
    str是用于存放读取的字符串
    str_len记录了读取的字符串的长度
    stream则是该函数从哪个数据流中读取数据
    该函数如果读取成功将返回0
    否则返回-1
*/
int getline(char** str, size_t* str_len, FILE* stream);