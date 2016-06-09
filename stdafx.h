// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <string>
#include <boost/thread.hpp>


#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <strsafe.h>
#include <sal.h>


#ifndef _TODO_DEFINED_
#define LINE1(x)	#x
#define LINE(x)		LINE1(x)
#define TODO(msg)	message(  __FILE__"(" LINE(__LINE__) ") [TODO] " msg )
#define todo TODO
#endif


#define log_level_debug         0
#define log_level_info          1
#define log_level_warn          2
#define log_level_critical      3
#define log_level_error         log_level_critical

#define log_err		log_write_fmt( log_level_error, 
#define log_warn	log_write_fmt( log_level_warn, 
#define log_info	log_write_fmt( log_level_info, 
#define log_dbg		log_write_fmt( log_level_debug, 
#define log_end     );

#define wtc_none    0
#define wtc_red     1
#define wtc_green   2


void write_to_console(_In_ uint32_t color, _In_z_ const char* log_message);
void log_write_fmt(_In_ uint32_t log_level, _In_z_ const char* fmt, _In_ ...);


