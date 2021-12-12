/**
 * SPDX-License-Identifier: Apache-2.0
 *
 * @file    instruction.hpp
 * @brief   header file for instruction class of 8085 microprocessor
 * instructions
 */

#ifndef INSTRUCTION_HPP_
#define INSTRUCTION_HPP_

#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "utils.hpp"

using namespace std;

void ADD(string arg1, string registers[], bool flag[],
         map<string, string> &memory, string &);
void SUB(string arg1, string registers[], bool flag[],
         map<string, string> &memory, string &);
void MOV(string argument1, string argument2, string registers[], bool flag[],
         map<string, string> &memory, string &);
void MVI(string arg1, string arg2, string registers[], bool flags[],
         map<string, string> &memory, string &);
#endif // INSTRUCTION_HPP_