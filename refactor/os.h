/*
 * (C) Copyright 2006 Diomidis Spinellis.
 *
 * Operating-system dependent functionality
 *
 * $Id: os.h,v 1.2 2008/12/04 15:19:06 dds Exp $
 */

#ifndef OS_
#define OS_

#include <string>

using namespace std;

// Return an opaque string uniquely identifying the filename passed
const char *get_uniq_fname_string(const char *pathname);
// Convert a (potential relative) file path into an absolute path
const char *get_full_path(const char *pathname);
// Return true if pathname is an absolute file path
bool is_absolute_filename(const string &pathname);

#endif // OS_
