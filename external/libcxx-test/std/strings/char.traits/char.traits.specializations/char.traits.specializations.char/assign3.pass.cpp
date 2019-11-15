/****************************************************************************
 *
 * Copyright 2018 Samsung Electronics All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the License.
 *
 ****************************************************************************/
//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <string>

// template<> struct char_traits<char>

// static char_type* assign(char_type* s, size_t n, char_type a);

#include <string>
#include <cassert>
#include "test_macros.h"
#include "libcxx_tc_common.h"

int tc_libcxx_strings_char_traits_specializations_char_assign3(void)
{
    char s2[3] = {0};
    TC_ASSERT_EXPR(std::char_traits<char>::assign(s2, 3, char(5)) == s2);
    TC_ASSERT_EXPR(s2[0] == char(5));
    TC_ASSERT_EXPR(s2[1] == char(5));
    TC_ASSERT_EXPR(s2[2] == char(5));
    TC_ASSERT_EXPR(std::char_traits<char>::assign(NULL, 0, char(5)) == NULL);
    TC_SUCCESS_RESULT();
    return 0;
}
