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
void say_hello_world();  // Function decleration
int wmain(int argc, const wchar_t* argv[]) {
  say_hello_world();
  return 1;
}
