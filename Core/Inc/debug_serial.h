/*
 * @LastEditors: qingmeijiupiao
 * @Description: 
 * @Author: qingmeijiupiao
 * @Date: 2024-11-06 19:45:43
 */
#ifndef DEBUG_SERIAL_H
#define DEBUG_SERIAL_H
#include"usart.h"
#include <string>
#include <cstring>
void send_log(std::string str);
void send_log(uint8_t* data, uint8_t len);
void send_log(float data);
#endif

