#include <iostream>
#include <stdarg.h>
#include <vector>
#include "utilsbox.h"

using namespace std;

std::string UtilsBox::GetVersion()
{	
	std::string version = UTILSBOX_VERSION;
	return version;
}

std::string UtilsBox::format(const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    int len = vsnprintf(nullptr, 0, fmt, ap);
    va_end(ap);
    std::string buf(len+1, '\0');
    va_start(ap, fmt);
    vsnprintf(&buf[0], buf.size(), fmt, ap);
    va_end(ap);
    buf.pop_back();
    return buf;
}