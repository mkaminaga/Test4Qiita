// @file hello.cc
// @brief Compilation test
// @author Mamoru Kaminaga
// @date 2017-04-11 14:19:53
//
// Copyright (c) 2017 Mamoru Kaminaga
//
// This software is released under the MIT License.
// http://opensource.org/licenses/mit-license.php
#include <wchar.h>
#include <windows.h>
#include <string>
void say_hello_world() {  // Function definition
  std::wstring hello(L"Hello World!");  // C++ STL compilation and link check.
  wprintf(L"%ls", hello.c_str());  // STL compilation and link check.
}
