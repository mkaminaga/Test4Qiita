// @file main.cc
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
int wmain(int argc, const wchar_t* argv[]) {
  std::wstring hello(L"Hello World!");  // C++ STL compilation and link check.
  wprintf(L"%ls", hello.c_str());  // STL compilation and link check.
  return 1;
}
