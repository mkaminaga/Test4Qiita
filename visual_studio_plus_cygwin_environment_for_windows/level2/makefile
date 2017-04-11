# @file makefile
# @brief Makefile for this project
# @author Mamoru Kaminaga
# @date 2017-04-11 16:19:14
#
# Copyright (c) 2017 Mamoru Kaminaga
#
# This software is released under the MIT License.
# http://opensource.org/licenses/mit-license.php
CC = "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Tools\MSVC\14.10.25017\bin\HostX86\x86\cl.exe"
LINK = "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Tools\MSVC\14.10.25017\bin\HostX86\x86\link.exe"

TARGET = main.exe
SRC = main.cc hello.cc
OBJS = main.obj hello.obj

CPPFLAGS = /W4 /Zi /O2 /MT /D"UNICODE" /D"_UNICODE" /EHsc
LFLAGS = /SUBSYSTEM:CONSOLE

ALL: $(TARGET)

$(TARGET): $(OBJS)
	$(LINK) $(LFLAGS) /OUT:$(TARGET) $(OBJS)

.cc.obj:
	$(CC) $(CPPFLAGS) /c $<
