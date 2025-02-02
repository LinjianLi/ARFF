#include <stdexcept>

#include "arff_utils.h"



#define STR_LENGTH 2048
void throw_ex(const char* file, int64 line, const char* fmt, ...) {
    char msg[STR_LENGTH];
    va_list va;
    va_start(va, fmt);
    vsprintf(msg, fmt, va);
    va_end(va);
    std::string err(file);
    err += ":" + std::to_string(line) + " -- ";
    err += msg;
    std::runtime_error ex(err);
    throw ex;
}
#undef STR_LENGTH


bool icompare(const std::string& str, const std::string& ref) {
    size_t s1 = str.size();
    size_t s2 = ref.size();
    if(s1 != s2) {
        return false;
    }
    const char* ch1 = str.c_str();
    const char* ch2 = ref.c_str();
    for(size_t i=0;i<s1;++i) {
        if(std::tolower(ch1[i]) != std::tolower(ch2[i])) {
            return false;
        }
    }
    return true;
}
